<?php
/**
 * @file
 * directory_listing.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function directory_listing_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-directory_listing_search-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'directory_listing_search-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'directory',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'custom_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'custom_theme',
        'weight' => 0,
      ),
      'fial_theme' => array(
        'region' => 'content_upper',
        'status' => 1,
        'theme' => 'fial_theme',
        'weight' => -51,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
