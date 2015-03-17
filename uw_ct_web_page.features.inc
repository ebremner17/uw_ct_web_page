<?php
/**
 * @file
 * uw_ct_web_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uw_ct_web_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uw_ct_web_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function uw_ct_web_page_image_default_styles() {
  $styles = array();

  // Exported image style: body-500px-wide.
  $styles['body-500px-wide'] = array(
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 500,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'body-500px-wide',
  );

  // Exported image style: sidebar-220px-wide.
  $styles['sidebar-220px-wide'] = array(
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'sidebar-220px-wide',
  );

  // Exported image style: wide-body-750px-wide.
  $styles['wide-body-750px-wide'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 750,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'wide-body-750px-wide',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function uw_ct_web_page_node_info() {
  $items = array(
    'uw_web_page' => array(
      'name' => t('Web Page'),
      'base' => 'node_content',
      'description' => t('Web pages have main and sidebar content areas, as well as related links.'),
      'has_title' => '1',
      'title_label' => t('Heading'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
