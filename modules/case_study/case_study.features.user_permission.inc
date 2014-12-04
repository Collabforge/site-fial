<?php
/**
 * @file
 * case_study.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function case_study_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'convert from case_study'.
  $permissions['convert from case_study'] = array(
    'name' => 'convert from case_study',
    'roles' => array(),
    'module' => 'node_convert',
  );

  // Exported permission: 'convert to case_study'.
  $permissions['convert to case_study'] = array(
    'name' => 'convert to case_study',
    'roles' => array(),
    'module' => 'node_convert',
  );

  // Exported permission: 'create case_study content'.
  $permissions['create case_study content'] = array(
    'name' => 'create case_study content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any case_study content'.
  $permissions['delete any case_study content'] = array(
    'name' => 'delete any case_study content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own case_study content'.
  $permissions['delete own case_study content'] = array(
    'name' => 'delete own case_study content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any case_study content'.
  $permissions['edit any case_study content'] = array(
    'name' => 'edit any case_study content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own case_study content'.
  $permissions['edit own case_study content'] = array(
    'name' => 'edit own case_study content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'search case_study content'.
  $permissions['search case_study content'] = array(
    'name' => 'search case_study content',
    'roles' => array(),
    'module' => 'search_config',
  );

  return $permissions;
}
