<?php
/**
 * @file
 * scoopit_post.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function scoopit_post_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function scoopit_post_node_info() {
  $items = array(
    'scoopit_post' => array(
      'name' => t('Scoopit Post'),
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
