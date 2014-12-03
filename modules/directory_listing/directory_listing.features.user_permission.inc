<?php
/**
 * @file
 * directory_listing.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function directory_listing_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'convert from directory_item'.
  $permissions['convert from directory_item'] = array(
    'name' => 'convert from directory_item',
    'roles' => array(),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert to directory_item'.
  $permissions['convert to directory_item'] = array(
    'name' => 'convert to directory_item',
    'roles' => array(),
    'module' => 'node_convert',
  );

  // Exported permission: 'create directory_item content'.
  $permissions['create directory_item content'] = array(
    'name' => 'create directory_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any directory_item content'.
  $permissions['delete any directory_item content'] = array(
    'name' => 'delete any directory_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own directory_item content'.
  $permissions['delete own directory_item content'] = array(
    'name' => 'delete own directory_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any directory_item content'.
  $permissions['edit any directory_item content'] = array(
    'name' => 'edit any directory_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own directory_item content'.
  $permissions['edit own directory_item content'] = array(
    'name' => 'edit own directory_item content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'search directory_item content'.
  $permissions['search directory_item content'] = array(
    'name' => 'search directory_item content',
    'roles' => array(),
    'module' => 'search_config',
  );

  return $permissions;
}
