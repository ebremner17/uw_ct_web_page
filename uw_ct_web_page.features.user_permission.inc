<?php
/**
 * @file
 * uw_ct_web_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function uw_ct_web_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: create uw_web_page content.
  $permissions['create uw_web_page content'] = array(
    'name' => 'create uw_web_page content',
    'roles' => array(
      'WCMS support' => 'WCMS support',
      'administrator' => 'administrator',
      'content author' => 'content author',
      'content editor' => 'content editor',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any uw_web_page content.
  $permissions['delete any uw_web_page content'] = array(
    'name' => 'delete any uw_web_page content',
    'roles' => array(
      'WCMS support' => 'WCMS support',
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own uw_web_page content.
  $permissions['delete own uw_web_page content'] = array(
    'name' => 'delete own uw_web_page content',
    'roles' => array(
      'WCMS support' => 'WCMS support',
      'administrator' => 'administrator',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any uw_web_page content.
  $permissions['edit any uw_web_page content'] = array(
    'name' => 'edit any uw_web_page content',
    'roles' => array(
      'WCMS support' => 'WCMS support',
      'administrator' => 'administrator',
      'content author' => 'content author',
      'content editor' => 'content editor',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own uw_web_page content.
  $permissions['edit own uw_web_page content'] = array(
    'name' => 'edit own uw_web_page content',
    'roles' => array(
      'WCMS support' => 'WCMS support',
      'administrator' => 'administrator',
      'content author' => 'content author',
      'content editor' => 'content editor',
      'site manager' => 'site manager',
    ),
    'module' => 'node',
  );

  // Exported permission: enter uw_web_page revision log entry.
  $permissions['enter uw_web_page revision log entry'] = array(
    'name' => 'enter uw_web_page revision log entry',
    'roles' => array(
      'WCMS support' => 'WCMS support',
      'administrator' => 'administrator',
      'content author' => 'content author',
      'content editor' => 'content editor',
      'site manager' => 'site manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override uw_web_page published option.
  $permissions['override uw_web_page published option'] = array(
    'name' => 'override uw_web_page published option',
    'roles' => array(
      'WCMS support' => 'WCMS support',
      'administrator' => 'administrator',
      'content author' => 'content author',
      'content editor' => 'content editor',
      'site manager' => 'site manager',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override uw_web_page revision option.
  $permissions['override uw_web_page revision option'] = array(
    'name' => 'override uw_web_page revision option',
    'roles' => array(
      'WCMS support' => 'WCMS support',
      'administrator' => 'administrator',
      'content author' => 'content author',
      'content editor' => 'content editor',
      'site manager' => 'site manager',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
