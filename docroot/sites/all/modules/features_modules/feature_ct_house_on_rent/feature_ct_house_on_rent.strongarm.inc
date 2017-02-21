<?php
/**
 * @file
 * feature_ct_house_on_rent.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_ct_house_on_rent_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ct_house_on_rent';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'additional_settings' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '0',
        ),
        'locations' => array(
          'weight' => '0',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ct_house_on_rent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ct_house_on_rent';
  $strongarm->value = array();
  $export['menu_options_ct_house_on_rent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ct_house_on_rent';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ct_house_on_rent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ct_house_on_rent';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ct_house_on_rent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ct_house_on_rent';
  $strongarm->value = '0';
  $export['node_preview_ct_house_on_rent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ct_house_on_rent';
  $strongarm->value = 0;
  $export['node_submitted_ct_house_on_rent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_house_on_rent_pattern';
  $strongarm->value = 'house-on-rent/[node:title]';
  $export['pathauto_node_ct_house_on_rent_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_vocab_bhk_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_vocab_bhk_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_vocab_locality_pattern';
  $strongarm->value = 'locality/[term:name]';
  $export['pathauto_taxonomy_term_vocab_locality_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_vocab_property_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_vocab_property_type_pattern'] = $strongarm;

  return $export;
}
