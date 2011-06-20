<?php
/**
 * @file
 * uw_ct_web_page.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function uw_ct_web_page_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function uw_ct_web_page_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function uw_ct_web_page_node_info() {
  $items = array(
    'uw_web_page' => array(
      'name' => t('Web Page'),
      'base' => 'node_content',
      'description' => t('A generic web page.'),
      'has_title' => '1',
      'title_label' => t('Heading'),
      'help' => '',
    ),
  );
  return $items;
}
