<?php
/**
 * @file
 * uw_ct_web_page.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function uw_ct_web_page_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'Web page sidebar content';
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
        'views-uw_web_page_related_links-block' => array(
          'module' => 'views',
          'delta' => 'uw_web_page_related_links-block',
          'region' => 'sidebar',
          'weight' => '-10',
        ),
        'views-b4027a2b0aca8e4b4e840a47f52a7d6b' => array(
          'module' => 'views',
          'delta' => 'b4027a2b0aca8e4b4e840a47f52a7d6b',
          'region' => 'sidebar',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Displays web page sidebar content.');
  $export['Web page sidebar content'] = $context;

  return $export;
}
