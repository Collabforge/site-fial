<?php
/**
 * @file
 * directory_listing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function directory_listing_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function directory_listing_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function directory_listing_node_info() {
  $items = array(
    'directory_item' => array(
      'name' => t('DIrectory Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
