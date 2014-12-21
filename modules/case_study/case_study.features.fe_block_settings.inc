<?php
/**
 * @file
 * case_study.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function case_study_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-case_studies-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'case_studies-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'case-studies',
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
        'weight' => -50,
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
