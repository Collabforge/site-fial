<?php
/**
 * @file
 * case_study.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function case_study_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'case_studies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'case_studies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'case_studies';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'search';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: casestudy_Image */
  $handler->display->display_options['fields']['field_casestudy_image']['id'] = 'field_casestudy_image';
  $handler->display->display_options['fields']['field_casestudy_image']['table'] = 'field_data_field_casestudy_image';
  $handler->display->display_options['fields']['field_casestudy_image']['field'] = 'field_casestudy_image';
  $handler->display->display_options['fields']['field_casestudy_image']['label'] = '';
  $handler->display->display_options['fields']['field_casestudy_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_casestudy_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_casestudy_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_casestudy_image']['settings'] = array(
    'image_style' => 'featured_article',
    'image_link' => '',
  );
  /* Field: Content: File attachment */
  $handler->display->display_options['fields']['field_file_attachment']['id'] = 'field_file_attachment';
  $handler->display->display_options['fields']['field_file_attachment']['table'] = 'field_data_field_file_attachment';
  $handler->display->display_options['fields']['field_file_attachment']['field'] = 'field_file_attachment';
  $handler->display->display_options['fields']['field_file_attachment']['label'] = '';
  $handler->display->display_options['fields']['field_file_attachment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file_attachment']['type'] = 'file_url_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'fial_format';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<section class="section-sm">
  <aside class="aside-left aside-img-sm grey-border">
    [field_casestudy_image]
  </aside>
  <h6><a href="[field_ini_link_1]" target="_blank">[title]</a></h6>
  <p>[created]</p>
  <p>[body]</p>
  <p><a href="[field_file_attachment] " target="_blank">download</a></p>
  <span class="clear-both">&nbsp;</span>
</section>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'case_study' => 'case_study',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: casestudy_Image */
  $handler->display->display_options['fields']['field_casestudy_image']['id'] = 'field_casestudy_image';
  $handler->display->display_options['fields']['field_casestudy_image']['table'] = 'field_data_field_casestudy_image';
  $handler->display->display_options['fields']['field_casestudy_image']['field'] = 'field_casestudy_image';
  $handler->display->display_options['fields']['field_casestudy_image']['label'] = '';
  $handler->display->display_options['fields']['field_casestudy_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_casestudy_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_casestudy_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_casestudy_image']['settings'] = array(
    'image_style' => 'featured_article',
    'image_link' => '',
  );
  /* Field: Content: File attachment */
  $handler->display->display_options['fields']['field_file_attachment']['id'] = 'field_file_attachment';
  $handler->display->display_options['fields']['field_file_attachment']['table'] = 'field_data_field_file_attachment';
  $handler->display->display_options['fields']['field_file_attachment']['field'] = 'field_file_attachment';
  $handler->display->display_options['fields']['field_file_attachment']['label'] = '';
  $handler->display->display_options['fields']['field_file_attachment']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_file_attachment']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_file_attachment']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_file_attachment']['type'] = 'file_url_plain';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'date_only_shortform';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="cs-all">

<div class="cs-img"><p><a href="[field_file_attachment] " target="_blank">[field_casestudy_image]</a></p></div>

<div class="cs-title">[title]</div>
<div class="cs-calendar"><a href="[field_file_attachment] " target="_blank"><i class="icon-download"></i> download</a> | <i class="icon-calendar"></i> [created] </div>
<div class="cs-body">[body]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $translatables['case_studies'] = array(
    t('Master'),
    t('case_studies'),
    t('more'),
    t('search'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<section class="section-sm">
  <aside class="aside-left aside-img-sm grey-border">
    [field_casestudy_image]
  </aside>
  <h6><a href="[field_ini_link_1]" target="_blank">[title]</a></h6>
  <p>[created]</p>
  <p>[body]</p>
  <p><a href="[field_file_attachment] " target="_blank">download</a></p>
  <span class="clear-both">&nbsp;</span>
</section>'),
    t('Block'),
    t('<div class="cs-all">

<div class="cs-img"><p><a href="[field_file_attachment] " target="_blank">[field_casestudy_image]</a></p></div>

<div class="cs-title">[title]</div>
<div class="cs-calendar"><a href="[field_file_attachment] " target="_blank"><i class="icon-download"></i> download</a> | <i class="icon-calendar"></i> [created] </div>
<div class="cs-body">[body]</div>
</div>'),
  );
  $export['case_studies'] = $view;

  return $export;
}
