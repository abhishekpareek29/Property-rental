<?php
/**
 * @file
 * pr_site_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pr_site_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'account_page';
  $context->description = '';
  $context->tag = 'User Account';
  $context->conditions = array(
    'user_page' => array(
      'values' => array(
        'view' => 'view',
      ),
      'options' => array(
        'mode' => 'all',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-views_property_listing-block_2' => array(
          'module' => 'views',
          'delta' => 'views_property_listing-block_2',
          'region' => 'content',
          'weight' => '5',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('User Account');
  $export['account_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = 'Home Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-views_banners-banners_block' => array(
          'module' => 'views',
          'delta' => 'views_banners-banners_block',
          'region' => 'header',
          'weight' => '1',
        ),
        'views-views_property_listing-block_1' => array(
          'module' => 'views',
          'delta' => 'views_property_listing-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'entityform_block-ef_interested_in_property' => array(
          'module' => 'entityform_block',
          'delta' => 'ef_interested_in_property',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Home Page');
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'property_listing_page';
  $context->description = '';
  $context->tag = 'Property Listing Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'property-listing' => 'property-listing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'entityform_block-ef_interested_in_property' => array(
          'module' => 'entityform_block',
          'delta' => 'ef_interested_in_property',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Property Listing Page');
  $export['property_listing_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'property_node_pages';
  $context->description = '';
  $context->tag = 'Property Node Pages';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ct_house_on_rent' => 'ct_house_on_rent',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'pr_site_customization-contact_home_owner_button' => array(
          'module' => 'pr_site_customization',
          'delta' => 'contact_home_owner_button',
          'region' => 'content',
          'weight' => '1',
        ),
        'entityform_block-ef_interested_in_property' => array(
          'module' => 'entityform_block',
          'delta' => 'ef_interested_in_property',
          'region' => 'content',
          'weight' => '2',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Property Node Pages');
  $export['property_node_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide';
  $context->description = '';
  $context->tag = 'SiteWide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'pr_site_customization-register_for_free' => array(
          'module' => 'pr_site_customization',
          'delta' => 'register_for_free',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'tb_megamenu-menu-site-wide' => array(
          'module' => 'tb_megamenu',
          'delta' => 'menu-site-wide',
          'region' => 'header',
          'weight' => '-10',
        ),
        'pr_site_customization-footer_second_last_block' => array(
          'module' => 'pr_site_customization',
          'delta' => 'footer_second_last_block',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('SiteWide');
  $export['site_wide'] = $context;

  return $export;
}
