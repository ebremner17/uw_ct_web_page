<?php
/**
 * @file
 * uw_ct_web_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function uw_ct_web_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_sidebar_note_content'
  $field_bases['field_sidebar_note_content'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sidebar_note_content',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'uw_tf_standard',
        'value' => '<p>When wide page width is enabled, sidebar complementary content will not appear on this page.</p>
',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_sidebar_note_content_links'
  $field_bases['field_sidebar_note_content_links'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sidebar_note_content_links',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'uw_tf_standard',
        'value' => '<p>When wide page width is enabled, sidebar related links will not appear on this page.</p>
',
      ),
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  // Exported field_base: 'field_weight'
  $field_bases['field_weight'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_weight',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_wide'
  $field_bases['field_wide'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_wide',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
