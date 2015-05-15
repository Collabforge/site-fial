<?php
/**
 * @file
 * agriculture_map_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function agriculture_map_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'agriculture_course_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Agriculture Course Display';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agriculture Course Display';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_state_course' => 'field_state_course',
    'field_course_organisation_name' => 'field_course_organisation_name',
    'title' => 'title',
    'field_website' => 'field_website',
    'field_website_1' => 'field_website_1',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_state_course' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_course_organisation_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_website_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: State (field_state_course) */
  $handler->display->display_options['sorts']['field_state_course_value']['id'] = 'field_state_course_value';
  $handler->display->display_options['sorts']['field_state_course_value']['table'] = 'field_data_field_state_course';
  $handler->display->display_options['sorts']['field_state_course_value']['field'] = 'field_state_course_value';
  $handler->display->display_options['sorts']['field_state_course_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'agricultural_course' => 'agricultural_course',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_state_course']['id'] = 'field_state_course';
  $handler->display->display_options['fields']['field_state_course']['table'] = 'field_data_field_state_course';
  $handler->display->display_options['fields']['field_state_course']['field'] = 'field_state_course';
  $handler->display->display_options['fields']['field_state_course']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_state_course']['alter']['text'] = '<div id="[field_state_course-value]">[field_state_course]</div>';
  $handler->display->display_options['fields']['field_state_course']['element_label_colon'] = FALSE;
  /* Field: Content: Course Organisation Name */
  $handler->display->display_options['fields']['field_course_organisation_name']['id'] = 'field_course_organisation_name';
  $handler->display->display_options['fields']['field_course_organisation_name']['table'] = 'field_data_field_course_organisation_name';
  $handler->display->display_options['fields']['field_course_organisation_name']['field'] = 'field_course_organisation_name';
  $handler->display->display_options['fields']['field_course_organisation_name']['label'] = 'Organisation or Institute';
  $handler->display->display_options['fields']['field_course_organisation_name']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Course Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = 'Website Link';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['max_length'] = '35';
  $handler->display->display_options['fields']['field_website']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_website']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_plain';
  /* Field: Raw URL */
  $handler->display->display_options['fields']['field_website_1']['id'] = 'field_website_1';
  $handler->display->display_options['fields']['field_website_1']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website_1']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website_1']['ui_name'] = 'Raw URL';
  $handler->display->display_options['fields']['field_website_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website_1']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Website Link';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_website_1]" target="_blank">[field_website]</a>';
  $handler->display->display_options['fields']['nothing']['alter']['max_length'] = '10';
  $translatables['agriculture_course_display'] = array(
    t('Master'),
    t('Agriculture Course Display'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Title'),
    t('Block'),
    t('State'),
    t('<div id="[field_state_course-value]">[field_state_course]</div>'),
    t('Organisation or Institute'),
    t('Course Name'),
    t('Website Link'),
    t('Website'),
    t('<a href="[field_website_1]" target="_blank">[field_website]</a>'),
  );
  $export['agriculture_course_display'] = $view;

  return $export;
}
