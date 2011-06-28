<?php
/**
 * @file
 * uw_ct_web_page.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function uw_ct_web_page_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'uw_web_page_related_links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Page Related Links';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_related_link' => 'field_related_link',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
  /* Field: Content: Related Links */
  $handler->display->display_options['fields']['field_related_link']['id'] = 'field_related_link';
  $handler->display->display_options['fields']['field_related_link']['table'] = 'field_data_field_related_link';
  $handler->display->display_options['fields']['field_related_link']['field'] = 'field_related_link';
  $handler->display->display_options['fields']['field_related_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_related_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_related_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_related_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_related_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_related_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_related_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_related_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_related_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_related_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_related_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_related_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_related_link']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_related_link']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_related_link']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_related_link']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_related_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_related_link']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_related_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_related_link']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_related_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_related_link']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_related_link']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_related_link']['field_api_classes'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'uw_web_page' => 'uw_web_page',
  );
  /* Filter criterion: Content: Related Links (field_related_link:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_related_link';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['uw_web_page_related_links'] = $view;

  $view = new view;
  $view->name = 'uw_web_page_sidebar_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Page Sidebar Content';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Custom Content */
  $handler->display->display_options['fields']['field_sidebar_content']['id'] = 'field_sidebar_content';
  $handler->display->display_options['fields']['field_sidebar_content']['table'] = 'field_data_field_sidebar_content';
  $handler->display->display_options['fields']['field_sidebar_content']['field'] = 'field_sidebar_content';
  $handler->display->display_options['fields']['field_sidebar_content']['label'] = '';
  $handler->display->display_options['fields']['field_sidebar_content']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_sidebar_content']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_sidebar_content']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_sidebar_content']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_sidebar_content']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_sidebar_content']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_sidebar_content']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_sidebar_content']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_sidebar_content']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_sidebar_content']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_sidebar_content']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_sidebar_content']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_sidebar_content']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_sidebar_content']['element_class'] = 'sidebar-content';
  $handler->display->display_options['fields']['field_sidebar_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sidebar_content']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_sidebar_content']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_sidebar_content']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_sidebar_content']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_sidebar_content']['field_api_classes'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'uw_web_page' => 'uw_web_page',
  );
  /* Filter criterion: Content: Custom Content (field_sidebar_content) */
  $handler->display->display_options['filters']['field_sidebar_content_value']['id'] = 'field_sidebar_content_value';
  $handler->display->display_options['filters']['field_sidebar_content_value']['table'] = 'field_data_field_sidebar_content';
  $handler->display->display_options['filters']['field_sidebar_content_value']['field'] = 'field_sidebar_content_value';
  $handler->display->display_options['filters']['field_sidebar_content_value']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['uw_web_page_sidebar_content'] = $view;

  return $export;
}
