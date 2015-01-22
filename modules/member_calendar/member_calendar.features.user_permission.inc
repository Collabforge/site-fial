<?php
/**
 * @file
 * member_calendar.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function member_calendar_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create custom_event content'.
  $permissions['create custom_event content'] = array(
    'name' => 'create custom_event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any custom_event content'.
  $permissions['delete any custom_event content'] = array(
    'name' => 'delete any custom_event content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own custom_event content'.
  $permissions['delete own custom_event content'] = array(
    'name' => 'delete own custom_event content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any custom_event content'.
  $permissions['edit any custom_event content'] = array(
    'name' => 'edit any custom_event content',
    'roles' => array(
      'Admin' => 'Admin',
      'Community Moderator' => 'Community Moderator',
      'Content Manager' => 'Content Manager',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own custom_event content'.
  $permissions['edit own custom_event content'] = array(
    'name' => 'edit own custom_event content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'search custom_event content'.
  $permissions['search custom_event content'] = array(
    'name' => 'search custom_event content',
    'roles' => array(),
    'module' => 'search_config',
  );

  return $permissions;
}
