<?php
/**
 * @file
 * pr_view_list_property.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function pr_view_list_property_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'views_property_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Property Listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Property Listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-md-6 col-sm-12 col-lg-4';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Property Listings Yet. <a href="/node/add/ct-house-on-rent">List Property</a>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_ct_hor_images']['id'] = 'field_ct_hor_images';
  $handler->display->display_options['fields']['field_ct_hor_images']['table'] = 'field_data_field_ct_hor_images';
  $handler->display->display_options['fields']['field_ct_hor_images']['field'] = 'field_ct_hor_images';
  $handler->display->display_options['fields']['field_ct_hor_images']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_hor_images']['settings'] = array(
    'image_style' => 'img_style_property_listing',
    'image_link' => 'content',
  );
  /* Field: Content: Monthly Rent */
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['id'] = 'field_ct_hor_monthly_rent';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['table'] = 'field_data_field_ct_hor_monthly_rent';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['field'] = 'field_ct_hor_monthly_rent';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['alter']['text'] = '&#8377; [field_ct_hor_monthly_rent]';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Locality */
  $handler->display->display_options['fields']['field_ct_hor_locality']['id'] = 'field_ct_hor_locality';
  $handler->display->display_options['fields']['field_ct_hor_locality']['table'] = 'field_data_field_ct_hor_locality';
  $handler->display->display_options['fields']['field_ct_hor_locality']['field'] = 'field_ct_hor_locality';
  $handler->display->display_options['fields']['field_ct_hor_locality']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_locality']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Space */
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['id'] = 'field_ct_hor_bhk_type';
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['table'] = 'field_data_field_ct_hor_bhk_type';
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['field'] = 'field_ct_hor_bhk_type';
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Property Type */
  $handler->display->display_options['fields']['field_ct_hor_property_type']['id'] = 'field_ct_hor_property_type';
  $handler->display->display_options['fields']['field_ct_hor_property_type']['table'] = 'field_data_field_ct_hor_property_type';
  $handler->display->display_options['fields']['field_ct_hor_property_type']['field'] = 'field_ct_hor_property_type';
  $handler->display->display_options['fields']['field_ct_hor_property_type']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_property_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_property_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_property_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Availability from */
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['id'] = 'field_ct_hor_availability_from';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['table'] = 'field_data_field_ct_hor_availability_from';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['field'] = 'field_ct_hor_availability_from';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['settings'] = array(
    'format_type' => 'date_simple_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Tenant Type */
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['id'] = 'field_ct_hor_tenant_type';
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['table'] = 'field_data_field_ct_hor_tenant_type';
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['field'] = 'field_ct_hor_tenant_type';
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Parking */
  $handler->display->display_options['fields']['field_ct_hor_parking']['id'] = 'field_ct_hor_parking';
  $handler->display->display_options['fields']['field_ct_hor_parking']['table'] = 'field_data_field_ct_hor_parking';
  $handler->display->display_options['fields']['field_ct_hor_parking']['field'] = 'field_ct_hor_parking';
  $handler->display->display_options['fields']['field_ct_hor_parking']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_parking']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_parking']['element_label_colon'] = FALSE;
  /* Field: Content: Furnishing */
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['id'] = 'field_ct_hor_furnishing';
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['table'] = 'field_data_field_ct_hor_furnishing';
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['field'] = 'field_ct_hor_furnishing';
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['element_label_colon'] = FALSE;
  /* Field: Content: Built Up Area */
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['id'] = 'field_ct_hor_built_up_area';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['table'] = 'field_data_field_ct_hor_built_up_area';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['field'] = 'field_ct_hor_built_up_area';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['alter']['text'] = '[field_ct_hor_built_up_area] sqft';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pl_wrapper">
  <div class="pl_image">[field_ct_hor_images]</div>
  <div class="pl_details">
   <div class="pl_heading">
    <div class="pl_title">[field_ct_hor_bhk_type] [field_ct_hor_property_type]</div>
    <div class="pl_locality">for rent in [field_ct_hor_locality]</div>
   </div>
   <div class="pl_sub_details">
    <div class="pl_rent_area">
     <div class="pl_rent">[field_ct_hor_monthly_rent]</div>
     <div class="pl_area">[field_ct_hor_built_up_area]</div>
    </div>
    <div class="pl_features">
     <div class="pl_parking">Parking: [field_ct_hor_parking]</div>
     <div class="pl_furnishing">[field_ct_hor_furnishing]</div>
    </div>
    <div class="pl_availability">Available from: [field_ct_hor_availability_from] for [field_ct_hor_tenant_type]</div>
   <div class="pl_buttons">
     <div class="pl_full_detail btn-warning"><a href="[path]">See full detail</a></div>
   </div>
  </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_house_on_rent' => 'ct_house_on_rent',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_ct_hor_images']['id'] = 'field_ct_hor_images';
  $handler->display->display_options['fields']['field_ct_hor_images']['table'] = 'field_data_field_ct_hor_images';
  $handler->display->display_options['fields']['field_ct_hor_images']['field'] = 'field_ct_hor_images';
  $handler->display->display_options['fields']['field_ct_hor_images']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_hor_images']['settings'] = array(
    'image_style' => 'img_style_property_listing',
    'image_link' => 'content',
  );
  /* Field: Content: Monthly Rent */
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['id'] = 'field_ct_hor_monthly_rent';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['table'] = 'field_data_field_ct_hor_monthly_rent';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['field'] = 'field_ct_hor_monthly_rent';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['alter']['text'] = '&#8377; [field_ct_hor_monthly_rent]';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Locality */
  $handler->display->display_options['fields']['field_ct_hor_locality']['id'] = 'field_ct_hor_locality';
  $handler->display->display_options['fields']['field_ct_hor_locality']['table'] = 'field_data_field_ct_hor_locality';
  $handler->display->display_options['fields']['field_ct_hor_locality']['field'] = 'field_ct_hor_locality';
  $handler->display->display_options['fields']['field_ct_hor_locality']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_locality']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Space */
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['id'] = 'field_ct_hor_bhk_type';
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['table'] = 'field_data_field_ct_hor_bhk_type';
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['field'] = 'field_ct_hor_bhk_type';
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Property Type */
  $handler->display->display_options['fields']['field_ct_hor_property_type']['id'] = 'field_ct_hor_property_type';
  $handler->display->display_options['fields']['field_ct_hor_property_type']['table'] = 'field_data_field_ct_hor_property_type';
  $handler->display->display_options['fields']['field_ct_hor_property_type']['field'] = 'field_ct_hor_property_type';
  $handler->display->display_options['fields']['field_ct_hor_property_type']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_property_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_property_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_property_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Availability from */
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['id'] = 'field_ct_hor_availability_from';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['table'] = 'field_data_field_ct_hor_availability_from';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['field'] = 'field_ct_hor_availability_from';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['settings'] = array(
    'format_type' => 'date_simple_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Tenant Type */
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['id'] = 'field_ct_hor_tenant_type';
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['table'] = 'field_data_field_ct_hor_tenant_type';
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['field'] = 'field_ct_hor_tenant_type';
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Parking */
  $handler->display->display_options['fields']['field_ct_hor_parking']['id'] = 'field_ct_hor_parking';
  $handler->display->display_options['fields']['field_ct_hor_parking']['table'] = 'field_data_field_ct_hor_parking';
  $handler->display->display_options['fields']['field_ct_hor_parking']['field'] = 'field_ct_hor_parking';
  $handler->display->display_options['fields']['field_ct_hor_parking']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_parking']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_parking']['element_label_colon'] = FALSE;
  /* Field: Content: Furnishing */
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['id'] = 'field_ct_hor_furnishing';
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['table'] = 'field_data_field_ct_hor_furnishing';
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['field'] = 'field_ct_hor_furnishing';
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['element_label_colon'] = FALSE;
  /* Field: Content: Built Up Area */
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['id'] = 'field_ct_hor_built_up_area';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['table'] = 'field_data_field_ct_hor_built_up_area';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['field'] = 'field_ct_hor_built_up_area';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['alter']['text'] = '[field_ct_hor_built_up_area] sqft';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pl_wrapper">
  <div class="pl_image">[field_ct_hor_images]</div>
  <div class="pl_details">
   <div class="pl_heading">
    <div class="pl_title">[field_ct_hor_bhk_type] [field_ct_hor_property_type]</div>
    <div class="pl_locality">for rent in [field_ct_hor_locality]</div>
   </div>
   <div class="pl_sub_details">
    <div class="pl_rent_area">
     <div class="pl_rent">[field_ct_hor_monthly_rent]</div>
     <div class="pl_area">[field_ct_hor_built_up_area]</div>
    </div>
    <div class="pl_features">
     <div class="pl_parking">Parking: [field_ct_hor_parking]</div>
     <div class="pl_furnishing">[field_ct_hor_furnishing]</div>
    </div>
    <div class="pl_availability">Available from: [field_ct_hor_availability_from] for [field_ct_hor_tenant_type]</div>
   <div class="pl_buttons">
     <div class="pl_full_detail btn-warning"><a href="[path]">See full detail</a></div>
     <div class="pl_interested btn-primary" data=[nid]>Interested</div>
   </div>
  </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'property-listing';

  /* Display: Property listing Block */
  $handler = $view->new_display('block', 'Property listing Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Images */
  $handler->display->display_options['fields']['field_ct_hor_images']['id'] = 'field_ct_hor_images';
  $handler->display->display_options['fields']['field_ct_hor_images']['table'] = 'field_data_field_ct_hor_images';
  $handler->display->display_options['fields']['field_ct_hor_images']['field'] = 'field_ct_hor_images';
  $handler->display->display_options['fields']['field_ct_hor_images']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ct_hor_images']['settings'] = array(
    'image_style' => 'img_style_property_listing',
    'image_link' => 'content',
  );
  /* Field: Content: Monthly Rent */
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['id'] = 'field_ct_hor_monthly_rent';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['table'] = 'field_data_field_ct_hor_monthly_rent';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['field'] = 'field_ct_hor_monthly_rent';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['alter']['text'] = '&#8377; [field_ct_hor_monthly_rent]';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Locality */
  $handler->display->display_options['fields']['field_ct_hor_locality']['id'] = 'field_ct_hor_locality';
  $handler->display->display_options['fields']['field_ct_hor_locality']['table'] = 'field_data_field_ct_hor_locality';
  $handler->display->display_options['fields']['field_ct_hor_locality']['field'] = 'field_ct_hor_locality';
  $handler->display->display_options['fields']['field_ct_hor_locality']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_locality']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Space */
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['id'] = 'field_ct_hor_bhk_type';
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['table'] = 'field_data_field_ct_hor_bhk_type';
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['field'] = 'field_ct_hor_bhk_type';
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Property Type */
  $handler->display->display_options['fields']['field_ct_hor_property_type']['id'] = 'field_ct_hor_property_type';
  $handler->display->display_options['fields']['field_ct_hor_property_type']['table'] = 'field_data_field_ct_hor_property_type';
  $handler->display->display_options['fields']['field_ct_hor_property_type']['field'] = 'field_ct_hor_property_type';
  $handler->display->display_options['fields']['field_ct_hor_property_type']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_property_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_property_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_property_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Availability from */
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['id'] = 'field_ct_hor_availability_from';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['table'] = 'field_data_field_ct_hor_availability_from';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['field'] = 'field_ct_hor_availability_from';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['settings'] = array(
    'format_type' => 'date_simple_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Tenant Type */
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['id'] = 'field_ct_hor_tenant_type';
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['table'] = 'field_data_field_ct_hor_tenant_type';
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['field'] = 'field_ct_hor_tenant_type';
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Parking */
  $handler->display->display_options['fields']['field_ct_hor_parking']['id'] = 'field_ct_hor_parking';
  $handler->display->display_options['fields']['field_ct_hor_parking']['table'] = 'field_data_field_ct_hor_parking';
  $handler->display->display_options['fields']['field_ct_hor_parking']['field'] = 'field_ct_hor_parking';
  $handler->display->display_options['fields']['field_ct_hor_parking']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_parking']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_parking']['element_label_colon'] = FALSE;
  /* Field: Content: Furnishing */
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['id'] = 'field_ct_hor_furnishing';
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['table'] = 'field_data_field_ct_hor_furnishing';
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['field'] = 'field_ct_hor_furnishing';
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['element_label_colon'] = FALSE;
  /* Field: Content: Built Up Area */
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['id'] = 'field_ct_hor_built_up_area';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['table'] = 'field_data_field_ct_hor_built_up_area';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['field'] = 'field_ct_hor_built_up_area';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['label'] = '';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['alter']['text'] = '[field_ct_hor_built_up_area] sqft';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pl_wrapper">
  <div class="pl_image">[field_ct_hor_images]</div>
  <div class="pl_details">
   <div class="pl_heading">
    <div class="pl_title">[field_ct_hor_bhk_type] [field_ct_hor_property_type]</div>
    <div class="pl_locality">for rent in [field_ct_hor_locality]</div>
   </div>
   <div class="pl_sub_details">
    <div class="pl_rent_area">
     <div class="pl_rent">[field_ct_hor_monthly_rent]</div>
     <div class="pl_area">[field_ct_hor_built_up_area]</div>
    </div>
    <div class="pl_features">
     <div class="pl_parking">Parking: [field_ct_hor_parking]</div>
     <div class="pl_furnishing">[field_ct_hor_furnishing]</div>
    </div>
    <div class="pl_availability">Available from: [field_ct_hor_availability_from] for [field_ct_hor_tenant_type]</div>
   <div class="pl_buttons">
     <div class="pl_full_detail btn-warning"><a href="[path]">See full detail</a></div>
     <div class="pl_interested btn-primary" data=[nid]>Interested</div>
   </div>
  </div>
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: My Property Listing */
  $handler = $view->new_display('block', 'My Property Listing', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Property Listings';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

  /* Display: Admin - Rental Showcase */
  $handler = $view->new_display('page', 'Admin - Rental Showcase', 'page_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_ct_hor_monthly_rent' => 'field_ct_hor_monthly_rent',
    'field_ct_hor_locality' => 'field_ct_hor_locality',
    'field_ct_hor_bhk_type' => 'field_ct_hor_bhk_type',
    'field_ct_hor_property_type' => 'field_ct_hor_property_type',
    'field_ct_hor_availability_from' => 'field_ct_hor_availability_from',
    'field_ct_hor_tenant_type' => 'field_ct_hor_tenant_type',
    'field_ct_hor_parking' => 'field_ct_hor_parking',
    'field_ct_hor_furnishing' => 'field_ct_hor_furnishing',
    'field_ct_hor_built_up_area' => 'field_ct_hor_built_up_area',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ct_hor_monthly_rent' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ct_hor_locality' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ct_hor_bhk_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ct_hor_property_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ct_hor_availability_from' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ct_hor_tenant_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ct_hor_parking' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ct_hor_furnishing' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ct_hor_built_up_area' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Monthly Rent */
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['id'] = 'field_ct_hor_monthly_rent';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['table'] = 'field_data_field_ct_hor_monthly_rent';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['field'] = 'field_ct_hor_monthly_rent';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['alter']['text'] = '&#8377; [field_ct_hor_monthly_rent]';
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_monthly_rent']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Locality */
  $handler->display->display_options['fields']['field_ct_hor_locality']['id'] = 'field_ct_hor_locality';
  $handler->display->display_options['fields']['field_ct_hor_locality']['table'] = 'field_data_field_ct_hor_locality';
  $handler->display->display_options['fields']['field_ct_hor_locality']['field'] = 'field_ct_hor_locality';
  $handler->display->display_options['fields']['field_ct_hor_locality']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_locality']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Space */
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['id'] = 'field_ct_hor_bhk_type';
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['table'] = 'field_data_field_ct_hor_bhk_type';
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['field'] = 'field_ct_hor_bhk_type';
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_bhk_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Property Type */
  $handler->display->display_options['fields']['field_ct_hor_property_type']['id'] = 'field_ct_hor_property_type';
  $handler->display->display_options['fields']['field_ct_hor_property_type']['table'] = 'field_data_field_ct_hor_property_type';
  $handler->display->display_options['fields']['field_ct_hor_property_type']['field'] = 'field_ct_hor_property_type';
  $handler->display->display_options['fields']['field_ct_hor_property_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_property_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Availability from */
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['id'] = 'field_ct_hor_availability_from';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['table'] = 'field_data_field_ct_hor_availability_from';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['field'] = 'field_ct_hor_availability_from';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['label'] = 'Available from';
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_availability_from']['settings'] = array(
    'format_type' => 'date_simple_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Tenant Type */
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['id'] = 'field_ct_hor_tenant_type';
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['table'] = 'field_data_field_ct_hor_tenant_type';
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['field'] = 'field_ct_hor_tenant_type';
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_tenant_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Parking */
  $handler->display->display_options['fields']['field_ct_hor_parking']['id'] = 'field_ct_hor_parking';
  $handler->display->display_options['fields']['field_ct_hor_parking']['table'] = 'field_data_field_ct_hor_parking';
  $handler->display->display_options['fields']['field_ct_hor_parking']['field'] = 'field_ct_hor_parking';
  $handler->display->display_options['fields']['field_ct_hor_parking']['element_label_colon'] = FALSE;
  /* Field: Content: Furnishing */
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['id'] = 'field_ct_hor_furnishing';
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['table'] = 'field_data_field_ct_hor_furnishing';
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['field'] = 'field_ct_hor_furnishing';
  $handler->display->display_options['fields']['field_ct_hor_furnishing']['element_label_colon'] = FALSE;
  /* Field: Content: Built Up Area */
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['id'] = 'field_ct_hor_built_up_area';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['table'] = 'field_data_field_ct_hor_built_up_area';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['field'] = 'field_ct_hor_built_up_area';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['alter']['text'] = '[field_ct_hor_built_up_area] sqft';
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ct_hor_built_up_area']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Complete Address */
  $handler->display->display_options['fields']['field_ct_hor_address']['id'] = 'field_ct_hor_address';
  $handler->display->display_options['fields']['field_ct_hor_address']['table'] = 'field_data_field_ct_hor_address';
  $handler->display->display_options['fields']['field_ct_hor_address']['field'] = 'field_ct_hor_address';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['path'] = 'admin/rental-listings';
  $export['views_property_listing'] = $view;

  return $export;
}
