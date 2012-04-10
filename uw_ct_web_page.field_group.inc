<?php
/**
 * @file
 * uw_ct_web_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uw_ct_web_page_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar_relatedlinks|node|uw_web_page|form';
  $field_group->group_name = 'group_sidebar_relatedlinks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uw_web_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar related links',
    'weight' => '3',
    'children' => array(
      0 => 'field_related_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sidebar related links',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_sidebar_relatedlinks|node|uw_web_page|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sidebar|node|uw_web_page|form';
  $field_group->group_name = 'group_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uw_web_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar complimentary content',
    'weight' => '2',
    'children' => array(
      0 => 'field_sidebar_content',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sidebar complimentary content',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_sidebar|node|uw_web_page|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_upload_file|node|uw_web_page|form';
  $field_group->group_name = 'group_upload_file';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uw_web_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Upload a file',
    'weight' => '5',
    'children' => array(
      0 => 'field_file',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Upload a file, yo!',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_upload_file|node|uw_web_page|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_upload|node|uw_web_page|form';
  $field_group->group_name = 'group_upload';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'uw_web_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Upload an image',
    'weight' => '4',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Upload an image',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_upload|node|uw_web_page|form'] = $field_group;

  return $export;
}
