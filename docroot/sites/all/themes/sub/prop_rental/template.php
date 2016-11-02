<?php
/**
 * @file
 * Contains theme related preprocesses.
 */

function prop_rental_preprocess_page(&$variables) {
  $path_alias = drupal_get_path_alias(current_path());
  $alias_exploded = explode('/', $path_alias);
  if ($path_alias == 'user' || $path_alias == 'user/password' || (arg(0) == 'user' && arg(2) == 'edit')) {
    drupal_add_css(drupal_get_path('theme', 'prop_rental') . '/css/user_login.css', 'file');
  }
  if ($alias_exploded[0] == 'users') {
    drupal_add_css(drupal_get_path('theme', 'prop_rental') . '/css/property_listing.css', 'file');
    drupal_add_css(drupal_get_path('theme', 'prop_rental') . '/css/user_account_page.css', 'file');
  }
  if (drupal_is_front_page()) {
    drupal_add_css(drupal_get_path('theme', 'prop_rental') . '/css/home.css', 'file');
    drupal_add_css(drupal_get_path('theme', 'prop_rental') . '/css/property_listing.css', 'file');
    drupal_add_js(drupal_get_path('theme', 'prop_rental') . '/javascripts/property_listing.js', 'file');
  }
  // HOR Add Page
  if ((arg(0) == 'node' && arg(1) == 'add' && arg(2) == 'ct-house-on-rent')) {
    drupal_add_css(drupal_get_path('theme', 'prop_rental') . '/css/property_add_form.css', 'file');
  }
  // HOR Edit Page
  if ((arg(0) == 'node' && arg(2) == 'edit') && (isset($variables['node']->type) && ($variables['node']->type == 'ct_house_on_rent'))) {
    drupal_add_css(drupal_get_path('theme', 'prop_rental') . '/css/property_add_form.css', 'file');
  }
  if ($path_alias == 'property-listing') {
    drupal_add_css(drupal_get_path('theme', 'prop_rental') . '/css/property_listing.css', 'file');
    drupal_add_js(drupal_get_path('theme', 'prop_rental') . '/javascripts/property_listing.js', 'file');
  }
  if ($path_alias == 'home-requirements') {
    drupal_add_css(drupal_get_path('theme', 'prop_rental') . '/css/property_add_form.css', 'file');
  }
  // HOR node Page
  if ($alias_exploded[0] == 'house-on-rent') {
    drupal_add_css(drupal_get_path('theme', 'prop_rental') . '/css/property_page.css', 'file');
    drupal_add_css(drupal_get_path('theme', 'prop_rental') . '/css/property_listing.css', 'file');
    drupal_add_js(drupal_get_path('theme', 'prop_rental') . '/javascripts/property_listing.js', 'file');
  }
}
