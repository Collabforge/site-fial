<?php
/**
 * @file
 * scoopit_post.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function scoopit_post_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'clone_of_scoopit_posts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Scoopit Posts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Posts';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '5';
  $handler->display->display_options['pager']['options']['tags']['first'] = '‹‹ ';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ ';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '››';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Curation Date */
  $handler->display->display_options['fields']['field_curation_date']['id'] = 'field_curation_date';
  $handler->display->display_options['fields']['field_curation_date']['table'] = 'field_data_field_curation_date';
  $handler->display->display_options['fields']['field_curation_date']['field'] = 'field_curation_date';
  $handler->display->display_options['fields']['field_curation_date']['label'] = '';
  $handler->display->display_options['fields']['field_curation_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_curation_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_curation_date']['settings'] = array(
    'format_type' => 'fial_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Image Url */
  $handler->display->display_options['fields']['field_image_url']['id'] = 'field_image_url';
  $handler->display->display_options['fields']['field_image_url']['table'] = 'field_data_field_image_url';
  $handler->display->display_options['fields']['field_image_url']['field'] = 'field_image_url';
  $handler->display->display_options['fields']['field_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_image_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_url']['alter']['text'] = '<img src=[field_image_url]  />';
  $handler->display->display_options['fields']['field_image_url']['element_label_colon'] = FALSE;
  /* Field: Content: Post external URL  */
  $handler->display->display_options['fields']['field_post_external_url_']['id'] = 'field_post_external_url_';
  $handler->display->display_options['fields']['field_post_external_url_']['table'] = 'field_data_field_post_external_url_';
  $handler->display->display_options['fields']['field_post_external_url_']['field'] = 'field_post_external_url_';
  $handler->display->display_options['fields']['field_post_external_url_']['label'] = '';
  $handler->display->display_options['fields']['field_post_external_url_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_post_external_url_']['element_label_colon'] = FALSE;
  /* Field: Content: Topic ID */
  $handler->display->display_options['fields']['field_topic_id']['id'] = 'field_topic_id';
  $handler->display->display_options['fields']['field_topic_id']['table'] = 'field_data_field_topic_id';
  $handler->display->display_options['fields']['field_topic_id']['field'] = 'field_topic_id';
  $handler->display->display_options['fields']['field_topic_id']['label'] = '';
  $handler->display->display_options['fields']['field_topic_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic_id']['element_label_colon'] = FALSE;
  /* Field: Content: Topic Name */
  $handler->display->display_options['fields']['field_topic_name']['id'] = 'field_topic_name';
  $handler->display->display_options['fields']['field_topic_name']['table'] = 'field_data_field_topic_name';
  $handler->display->display_options['fields']['field_topic_name']['field'] = 'field_topic_name';
  $handler->display->display_options['fields']['field_topic_name']['label'] = '';
  $handler->display->display_options['fields']['field_topic_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_topic_name']['element_label_colon'] = FALSE;
  /* Field: Content: source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['label'] = '';
  $handler->display->display_options['fields']['field_source']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_source']['element_label_colon'] = FALSE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_topic_name';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'food-innovation-by-a-4071';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[innovation]';
  $handler->display->display_options['fields']['views_conditional']['or'] = '[export]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<b>[title]</b><br>
[field_source]  / [field_curation_date] <br>
<img src=[field_image_url] /> [body] <br>
[views_conditional] <br>
<a href=[field_post_external_url_] target="_blank" >Read more >> </a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Curation Date (field_curation_date) */
  $handler->display->display_options['sorts']['field_curation_date_value']['id'] = 'field_curation_date_value';
  $handler->display->display_options['sorts']['field_curation_date_value']['table'] = 'field_data_field_curation_date';
  $handler->display->display_options['sorts']['field_curation_date_value']['field'] = 'field_curation_date_value';
  $handler->display->display_options['sorts']['field_curation_date_value']['order'] = 'DESC';
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
    'scoopit_post' => 'scoopit_post',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
  );

  /* Display: All posts */
  $handler = $view->new_display('block', 'All posts', 'scoopit_all_posts');

  /* Display: Innovation Topic posts */
  $handler = $view->new_display('block', 'Innovation Topic posts', 'innovation_scoopit_topic');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Innovation';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'scoopit_post' => 'scoopit_post',
  );
  /* Filter criterion: Content: Topic Name (field_topic_name) */
  $handler->display->display_options['filters']['field_topic_name_value']['id'] = 'field_topic_name_value';
  $handler->display->display_options['filters']['field_topic_name_value']['table'] = 'field_data_field_topic_name';
  $handler->display->display_options['filters']['field_topic_name_value']['field'] = 'field_topic_name_value';
  $handler->display->display_options['filters']['field_topic_name_value']['value'] = 'food-innovation-by-a-4071';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
  );

  /* Display: export topic posts */
  $handler = $view->new_display('block', 'export topic posts', 'export_scoopit_topic');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Export';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'scoopit_post' => 'scoopit_post',
  );
  /* Filter criterion: Content: Topic Name (field_topic_name) */
  $handler->display->display_options['filters']['field_topic_name_value']['id'] = 'field_topic_name_value';
  $handler->display->display_options['filters']['field_topic_name_value']['table'] = 'field_data_field_topic_name';
  $handler->display->display_options['filters']['field_topic_name_value']['field'] = 'field_topic_name_value';
  $handler->display->display_options['filters']['field_topic_name_value']['value'] = 'export-by-a-4071';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
  );

  /* Display: Search scoopit posts */
  $handler = $view->new_display('block', 'Search scoopit posts', 'search_posts');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Search Posts';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'scoopit_post' => 'scoopit_post',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
  );
  $translatables['clone_of_scoopit_posts'] = array(
    t('Master'),
    t('All Posts'),
    t('more'),
    t('Go'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('‹‹ '),
    t('‹ '),
    t('›'),
    t('››'),
    t('No results found.'),
    t('<img src=[field_image_url]  />'),
    t('<b>[title]</b><br>
[field_source]  / [field_curation_date] <br>
<img src=[field_image_url] /> [body] <br>
[views_conditional] <br>
<a href=[field_post_external_url_] target="_blank" >Read more >> </a>'),
    t('search'),
    t('All posts'),
    t('Innovation Topic posts'),
    t('Innovation'),
    t('export topic posts'),
    t('Export'),
    t('Search scoopit posts'),
    t('Search Posts'),
  );
  $export['clone_of_scoopit_posts'] = $view;

  return $export;
}
