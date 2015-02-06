<?php
/**
 * @file
 * fial_packaging_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function fial_packaging_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['quicktabs-directory'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'directory',
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => 'capabilities-directory',
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
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-73611fd5e54b952f08dc5fb30c8ccc5a'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '73611fd5e54b952f08dc5fb30c8ccc5a',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
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
        'region' => '',
        'status' => 0,
        'theme' => 'fial_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
