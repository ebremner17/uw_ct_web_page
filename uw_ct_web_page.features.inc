<?php
/**
 * @file
 * uw_ct_web_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uw_ct_web_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function uw_ct_web_page_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function uw_ct_web_page_image_default_styles() {
  $styles = array();

  // Exported image style: body-500px-wide.
  $styles['body-500px-wide'] = array(
    'name' => 'body-500px-wide',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
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
    'name' => 'sidebar-220px-wide',
    'effects' => array(
      5 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
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
    'name' => 'wide-body-750px-wide',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
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
  return $items;
}
