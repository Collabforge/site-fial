<?php
/**
 * @file
 * fial_packaging_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fial_packaging_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'packaging_directory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Packaging directory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Packaging directory';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_packaging_type_tid_selective' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
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
    'field_packaging_states_value_selective' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
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
  $handler->display->display_options['exposed_form']['options']['input_required'] = 1;
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = '';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_packaging_address']['id'] = 'field_packaging_address';
  $handler->display->display_options['fields']['field_packaging_address']['table'] = 'field_data_field_packaging_address';
  $handler->display->display_options['fields']['field_packaging_address']['field'] = 'field_packaging_address';
  $handler->display->display_options['fields']['field_packaging_address']['label'] = '';
  $handler->display->display_options['fields']['field_packaging_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_packaging_address']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_packaging_email']['id'] = 'field_packaging_email';
  $handler->display->display_options['fields']['field_packaging_email']['table'] = 'field_data_field_packaging_email';
  $handler->display->display_options['fields']['field_packaging_email']['field'] = 'field_packaging_email';
  $handler->display->display_options['fields']['field_packaging_email']['label'] = '';
  $handler->display->display_options['fields']['field_packaging_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_packaging_email']['element_label_colon'] = FALSE;
  /* Field: Content: Packaging Type */
  $handler->display->display_options['fields']['field_packaging_type']['id'] = 'field_packaging_type';
  $handler->display->display_options['fields']['field_packaging_type']['table'] = 'field_data_field_packaging_type';
  $handler->display->display_options['fields']['field_packaging_type']['field'] = 'field_packaging_type';
  $handler->display->display_options['fields']['field_packaging_type']['label'] = '';
  $handler->display->display_options['fields']['field_packaging_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_packaging_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_packaging_type']['delta_offset'] = '0';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_packaging_phone']['id'] = 'field_packaging_phone';
  $handler->display->display_options['fields']['field_packaging_phone']['table'] = 'field_data_field_packaging_phone';
  $handler->display->display_options['fields']['field_packaging_phone']['field'] = 'field_packaging_phone';
  $handler->display->display_options['fields']['field_packaging_phone']['label'] = '';
  $handler->display->display_options['fields']['field_packaging_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_packaging_phone']['element_label_colon'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_packaging_states']['id'] = 'field_packaging_states';
  $handler->display->display_options['fields']['field_packaging_states']['table'] = 'field_data_field_packaging_states';
  $handler->display->display_options['fields']['field_packaging_states']['field'] = 'field_packaging_states';
  $handler->display->display_options['fields']['field_packaging_states']['label'] = '';
  $handler->display->display_options['fields']['field_packaging_states']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_packaging_states']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_packaging_states']['delta_offset'] = '0';
  /* Field: Content: website */
  $handler->display->display_options['fields']['field_packaging_website']['id'] = 'field_packaging_website';
  $handler->display->display_options['fields']['field_packaging_website']['table'] = 'field_data_field_packaging_website';
  $handler->display->display_options['fields']['field_packaging_website']['field'] = 'field_packaging_website';
  $handler->display->display_options['fields']['field_packaging_website']['label'] = '';
  $handler->display->display_options['fields']['field_packaging_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_packaging_website']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>
[title]  <br>
[field_packaging_address] <br>
[field_packaging_email] <br>
[field_packaging_type] <br>
[field_packaging_phone] <br>
[field_packaging_states]  <br>
[field_packaging_website]
</div>';
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
    'packaging' => 'packaging',
  );
  /* Filter criterion: Packaging Type (field_packaging_type) (selective) */
  $handler->display->display_options['filters']['field_packaging_type_tid_selective']['id'] = 'field_packaging_type_tid_selective';
  $handler->display->display_options['filters']['field_packaging_type_tid_selective']['table'] = 'field_data_field_packaging_type';
  $handler->display->display_options['filters']['field_packaging_type_tid_selective']['field'] = 'field_packaging_type_tid_selective';
  $handler->display->display_options['filters']['field_packaging_type_tid_selective']['ui_name'] = 'Packaging Type (field_packaging_type) (selective)';
  $handler->display->display_options['filters']['field_packaging_type_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_packaging_type_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_packaging_type_tid_selective']['expose']['label'] = 'Select Packaging type';
  $handler->display->display_options['filters']['field_packaging_type_tid_selective']['expose']['identifier'] = 'field_packaging_type_tid_selective';
  $handler->display->display_options['filters']['field_packaging_type_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_packaging_type_tid_selective']['selective_display_field'] = 'field_packaging_type';
  $handler->display->display_options['filters']['field_packaging_type_tid_selective']['selective_display_sort'] = 'ASC';
  /* Filter criterion: State (field_packaging_states) (selective) */
  $handler->display->display_options['filters']['field_packaging_states_value_selective']['id'] = 'field_packaging_states_value_selective';
  $handler->display->display_options['filters']['field_packaging_states_value_selective']['table'] = 'field_data_field_packaging_states';
  $handler->display->display_options['filters']['field_packaging_states_value_selective']['field'] = 'field_packaging_states_value_selective';
  $handler->display->display_options['filters']['field_packaging_states_value_selective']['ui_name'] = 'State (field_packaging_states) (selective)';
  $handler->display->display_options['filters']['field_packaging_states_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_packaging_states_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_packaging_states_value_selective']['expose']['label'] = 'Select State';
  $handler->display->display_options['filters']['field_packaging_states_value_selective']['expose']['identifier'] = 'field_packaging_states_value_selective';
  $handler->display->display_options['filters']['field_packaging_states_value_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_packaging_states_value_selective']['selective_display_field'] = 'field_packaging_states';
  $handler->display->display_options['filters']['field_packaging_states_value_selective']['selective_display_sort'] = 'ASC';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'packaging_directory_block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_packaging_address']['id'] = 'field_packaging_address';
  $handler->display->display_options['fields']['field_packaging_address']['table'] = 'field_data_field_packaging_address';
  $handler->display->display_options['fields']['field_packaging_address']['field'] = 'field_packaging_address';
  $handler->display->display_options['fields']['field_packaging_address']['label'] = '';
  $handler->display->display_options['fields']['field_packaging_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_packaging_address']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_packaging_email']['id'] = 'field_packaging_email';
  $handler->display->display_options['fields']['field_packaging_email']['table'] = 'field_data_field_packaging_email';
  $handler->display->display_options['fields']['field_packaging_email']['field'] = 'field_packaging_email';
  $handler->display->display_options['fields']['field_packaging_email']['label'] = '';
  $handler->display->display_options['fields']['field_packaging_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_packaging_email']['element_label_colon'] = FALSE;
  /* Field: Content: Packaging Type */
  $handler->display->display_options['fields']['field_packaging_type']['id'] = 'field_packaging_type';
  $handler->display->display_options['fields']['field_packaging_type']['table'] = 'field_data_field_packaging_type';
  $handler->display->display_options['fields']['field_packaging_type']['field'] = 'field_packaging_type';
  $handler->display->display_options['fields']['field_packaging_type']['label'] = '';
  $handler->display->display_options['fields']['field_packaging_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_packaging_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_packaging_type']['delta_offset'] = '0';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_packaging_phone']['id'] = 'field_packaging_phone';
  $handler->display->display_options['fields']['field_packaging_phone']['table'] = 'field_data_field_packaging_phone';
  $handler->display->display_options['fields']['field_packaging_phone']['field'] = 'field_packaging_phone';
  $handler->display->display_options['fields']['field_packaging_phone']['label'] = '';
  $handler->display->display_options['fields']['field_packaging_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_packaging_phone']['element_label_colon'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_packaging_states']['id'] = 'field_packaging_states';
  $handler->display->display_options['fields']['field_packaging_states']['table'] = 'field_data_field_packaging_states';
  $handler->display->display_options['fields']['field_packaging_states']['field'] = 'field_packaging_states';
  $handler->display->display_options['fields']['field_packaging_states']['label'] = '';
  $handler->display->display_options['fields']['field_packaging_states']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_packaging_states']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_packaging_states']['delta_offset'] = '0';
  /* Field: Content: website */
  $handler->display->display_options['fields']['field_packaging_website']['id'] = 'field_packaging_website';
  $handler->display->display_options['fields']['field_packaging_website']['table'] = 'field_data_field_packaging_website';
  $handler->display->display_options['fields']['field_packaging_website']['field'] = 'field_packaging_website';
  $handler->display->display_options['fields']['field_packaging_website']['label'] = '';
  $handler->display->display_options['fields']['field_packaging_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_packaging_website']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_packaging_website']['alter']['path'] = '[field_packaging_website]';
  $handler->display->display_options['fields']['field_packaging_website']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_packaging_website']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_packaging_website']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_packaging_website']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<hr>
<div class="dir-all">
<div class="dir-title"> <i class="icon-asterisk"></i> [title] <br></div>
<div class="dir-body">
<ul>
<li style="font-size: 14px !important;
margin-left: 10px !important;"> <b>Address:</b> [field_packaging_address] <br></li>
<li style="font-size: 14px;
margin-left: 10px;"> <b>Email:</b> [field_packaging_email] <br></li>
<li style="font-size: 14px;
margin-left: 10px;"> <b>Phone:</b> [field_packaging_phone] <br></li>
<li style="font-size: 14px;
margin-left: 10px;"> <b>State:</b> [field_packaging_states] </li>
</ul>
</div>
<div class="dir-capabilities"> 
<i class="icon-tags"></i> tags: [field_packaging_type] <br>
<div class="dir-website">
<i class="icon-external-link"></i>[field_packaging_website]</div>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Packaging directory block';
  $translatables['packaging_directory'] = array(
    t('Master'),
    t('Packaging directory'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div>
[title]  <br>
[field_packaging_address] <br>
[field_packaging_email] <br>
[field_packaging_type] <br>
[field_packaging_phone] <br>
[field_packaging_states]  <br>
[field_packaging_website]
</div>'),
    t('Select Packaging type'),
    t('Select State'),
    t('Block'),
    t('<hr>
<div class="dir-all">
<div class="dir-title"> <i class="icon-asterisk"></i> [title] <br></div>
<div class="dir-body">
<ul>
<li style="font-size: 14px !important;
margin-left: 10px !important;"> <b>Address:</b> [field_packaging_address] <br></li>
<li style="font-size: 14px;
margin-left: 10px;"> <b>Email:</b> [field_packaging_email] <br></li>
<li style="font-size: 14px;
margin-left: 10px;"> <b>Phone:</b> [field_packaging_phone] <br></li>
<li style="font-size: 14px;
margin-left: 10px;"> <b>State:</b> [field_packaging_states] </li>
</ul>
</div>
<div class="dir-capabilities"> 
<i class="icon-tags"></i> tags: [field_packaging_type] <br>
<div class="dir-website">
<i class="icon-external-link"></i>[field_packaging_website]</div>
</div>
</div>'),
    t('Packaging directory block'),
  );
  $export['packaging_directory'] = $view;

  return $export;
}
