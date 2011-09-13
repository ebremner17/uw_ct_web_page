<?php
/**
 * @file
 * uw_ct_web_page.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function uw_ct_web_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: create uw_web_page content
  $permissions['create uw_web_page content'] = array(
    'name' => 'create uw_web_page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content author',
      2 => 'content editor',
      3 => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any uw_web_page content
  $permissions['delete any uw_web_page content'] = array(
    'name' => 'delete any uw_web_page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
      2 => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own uw_web_page content
  $permissions['delete own uw_web_page content'] = array(
    'name' => 'delete own uw_web_page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content editor',
      2 => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any uw_web_page content
  $permissions['edit any uw_web_page content'] = array(
    'name' => 'edit any uw_web_page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content author',
      2 => 'content editor',
      3 => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own uw_web_page content
  $permissions['edit own uw_web_page content'] = array(
    'name' => 'edit own uw_web_page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'content author',
      2 => 'content editor',
      3 => 'site manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
