<?php
/**
 * @file
 * uw_ct_web_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function uw_ct_web_page_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'web_page_sidebar_content';
  $context->description = 'Displays web page sidebar content.';
  $context->tag = 'Content';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'uw_web_page' => 'uw_web_page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'uw_ct_web_page-uw_sidebar_block' => array(
          'module' => 'uw_ct_web_page',
          'delta' => 'uw_sidebar_block',
          'region' => 'sidebar_second',
          'weight' => '-16',
        ),
        'uw_ct_web_page-uw_sidebar_related_links' => array(
          'module' => 'uw_ct_web_page',
          'delta' => 'uw_sidebar_related_links',
          'region' => 'sidebar_second',
          'weight' => '-15',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Displays web page sidebar content.');
  $export['web_page_sidebar_content'] = $context;

  return $export;
}
