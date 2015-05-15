<?php
/**
 * @file
 * agriculture_map_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function agriculture_map_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function agriculture_map_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function agriculture_map_feature_node_info() {
  $items = array(
    'agricultural_course' => array(
      'name' => t('Agricultural Course'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Course Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
