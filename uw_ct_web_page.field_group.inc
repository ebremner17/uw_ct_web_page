<?php
/**
 * @file
 * uw_ct_web_page.field_group.inc
 */

/**
 * Implementation of hook_field_group_info().
 */
function uw_ct_web_page_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|uw_web_page|form';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uw_web_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar Content',
    'weight' => '2',
    'children' => array(
      0 => 'field_related_link',
      1 => 'field_sidebar_content',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sidebar Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_sidebar|node|uw_web_page|form'] = $field_group;

  return $export;
}
