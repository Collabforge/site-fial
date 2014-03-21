<?php
/**
 * @file
 * fial_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fial_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'connect with oauthconnector_linkedin'.
  $permissions['connect with oauthconnector_linkedin'] = array(
    'name' => 'connect with oauthconnector_linkedin',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'connector',
  );

  return $permissions;
}
