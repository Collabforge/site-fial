<?php
/**
 * @file
 * fial_packaging_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function fial_packaging_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'packaging_import';
  $feeds_importer->config = array(
    'name' => 'Packaging Import',
    'description' => 'To import packaging content',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Business Name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Packaging Type',
            'target' => 'field_packaging_type',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'State',
            'target' => 'field_packaging_states',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Website',
            'target' => 'field_packaging_website',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Email',
            'target' => 'field_packaging_email',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Phone',
            'target' => 'field_packaging_phone',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Address',
            'target' => 'field_packaging_address',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'packaging',
      ),
    ),
    'content_type' => 'packaging',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['packaging_import'] = $feeds_importer;

  return $export;
}
