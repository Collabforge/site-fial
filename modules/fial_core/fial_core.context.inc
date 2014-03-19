<?php
/**
 * @file
 * fial_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fial_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'layout-about';
  $context->description = '';
  $context->tag = 'fail::layout';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/261' => 'node/261',
        'node/262' => 'node/262',
        'node/263' => 'node/263',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fial_core-about_menu' => array(
          'module' => 'fial_core',
          'delta' => 'about_menu',
          'region' => 'content_lower',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('fail::layout');
  $export['layout-about'] = $context;

  return $export;
}
