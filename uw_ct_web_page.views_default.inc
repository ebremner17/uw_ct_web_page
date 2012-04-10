<?php
/**
 * @file
 * uw_ct_web_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uw_ct_web_page_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'manage_web_pages';
  $view->description = '';
  $view->tag = 'Workbench Moderation';
  $view->base_table = 'node_revision';
  $view->human_name = 'Manage web pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Content I\'ve Edited';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'view all';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'use workbench_moderation my drafts tab';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50, 100, 200';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid_1' => 'nid_1',
    'title' => 'title',
    'name' => 'name',
    'changed' => 'changed',
    'status' => 'status',
    'log' => 'log',
    'workbench_moderation_history_link' => 'workbench_moderation_history_link',
    'state' => 'state',
    'moderation_actions' => 'moderation_actions',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'log' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workbench_moderation_history_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'moderation_actions' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Web pages description';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<p>Web pages have main and sidebar content areas, as well as related links.</p>';
  $handler->display->display_options['header']['area']['format'] = 'uw_tf_standard';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['label'] = 'Add web page link';
  $handler->display->display_options['header']['area_1']['empty'] = TRUE;
  $handler->display->display_options['header']['area_1']['content'] = '<ul class="action-links">
<li>
<a href="../../../node/add/uw-web-page">Add web page</a>
</li>
</ul>';
  $handler->display->display_options['header']['area_1']['format'] = 'uw_tf_standard';
  $handler->display->display_options['header']['area_1']['tokenize'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'You haven\'t created or edited any content.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Relationship: Content revision: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid_1']['link_to_node'] = 0;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['path']['alter']['external'] = 0;
  $handler->display->display_options['fields']['path']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['path']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['path']['absolute'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[path]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Last updated by';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last updated';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: View */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'View';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'View';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = 'node/[nid_1]';
  $handler->display->display_options['fields']['nothing_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['alt'] = 'View ';
  $handler->display->display_options['fields']['nothing_3']['alter']['link_class'] = 'manage-actions-view';
  $handler->display->display_options['fields']['nothing_3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing_3']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_3']['hide_alter_empty'] = 0;
  /* Field: Create/edit draft */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Create/edit draft';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Create/edit draft';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Create/edit draft';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'node/[nid_1]/edit';
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['alt'] = 'Create/edit draft ';
  $handler->display->display_options['fields']['nothing_1']['alter']['link_class'] = 'manage-actions-edit';
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
  /* Field: Moderate */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Moderate';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Moderate';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Moderate';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'node/[nid_1]/moderate';
  $handler->display->display_options['fields']['nothing_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['alt'] = 'Moderate ';
  $handler->display->display_options['fields']['nothing_2']['alter']['link_class'] = 'manage-actions-moderate';
  $handler->display->display_options['fields']['nothing_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_2']['hide_alter_empty'] = 0;
  /* Field: Clone */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'Clone';
  $handler->display->display_options['fields']['nothing_4']['label'] = 'Clone';
  $handler->display->display_options['fields']['nothing_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = 'Clone';
  $handler->display->display_options['fields']['nothing_4']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing_4']['alter']['path'] = 'node/[nid_1]/clone';
  $handler->display->display_options['fields']['nothing_4']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_4']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_4']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_4']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_4']['alter']['alt'] = 'Clone ';
  $handler->display->display_options['fields']['nothing_4']['alter']['link_class'] = 'manage-actions-clone';
  $handler->display->display_options['fields']['nothing_4']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_4']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_4']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_4']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_4']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_4']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing_4']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_4']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_4']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_4']['hide_alter_empty'] = 0;
  /* Field: Actions */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['ui_name'] = 'Actions';
  $handler->display->display_options['fields']['nothing_5']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '<ul class="links manage-actions">
  <li>[nothing_3]</li>
  <li>[nothing_1]</li>
  <li>[nothing_2]</li>
  <li>[nothing_4]</li>
</ul>';
  $handler->display->display_options['fields']['nothing_5']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_5']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_5']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_5']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_5']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_5']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_5']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_5']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_5']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_5']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_5']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_5']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nothing_5']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing_5']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_5']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_5']['hide_alter_empty'] = 0;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Filter criterion: Workbench Moderation: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'all' => 'all',
    'draft' => 'draft',
    'needs_review' => 'needs_review',
    'published' => 'published',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['state']['expose']['reduce'] = 1;
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['group'] = 1;

  /* Display: Manage Web Pages */
  $handler = $view->new_display('page', 'Manage Web Pages', 'manage_web_pages');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Web Pages';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
    5 => '5',
    6 => '6',
  );
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Web pages not found text.';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = '<em>No web pages have been found matching your criteria. To add web pages, please use the link above.</em>';
  $handler->display->display_options['empty']['area']['format'] = 'uw_tf_standard';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Workbench Moderation: Current */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['value'] = '1';
  $handler->display->display_options['filters']['current']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'uw_web_page' => 'uw_web_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Last updated by';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['uid']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['multiple'] = FALSE;
  /* Filter criterion: Workbench Moderation: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['operator'] = 'not in';
  $handler->display->display_options['filters']['state']['value'] = array(
    'archived' => 'archived',
  );
  $handler->display->display_options['filters']['state']['group'] = 2;
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Workbench Moderation: State';
  $handler->display->display_options['filters']['state']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  $handler->display->display_options['filters']['status_1']['group'] = 2;
  $handler->display->display_options['path'] = 'admin/workbench/create/web-pages';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Web pages';
  $handler->display->display_options['menu']['weight'] = '0';
  $export['manage_web_pages'] = $view;

  return $export;
}
