<?php
/**
 * @file
 * directory_listing.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function directory_listing_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'directory_listing_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Directory Listing search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Directory Listing - Capability';
  $handler->display->display_options['css_class'] = 'directory-capabilities-container';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
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
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Industry Capability';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_capabilities_tid_selective' => array(
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
    'field_state_value_selective' => array(
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
  /* Field: Content: Sub title */
  $handler->display->display_options['fields']['field_sub_title']['id'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['table'] = 'field_data_field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['field'] = 'field_sub_title';
  $handler->display->display_options['fields']['field_sub_title']['label'] = '';
  $handler->display->display_options['fields']['field_sub_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sub_title']['element_label_colon'] = FALSE;
  /* Field: Content: State */
  $handler->display->display_options['fields']['field_state']['id'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['table'] = 'field_data_field_state';
  $handler->display->display_options['fields']['field_state']['field'] = 'field_state';
  $handler->display->display_options['fields']['field_state']['label'] = '';
  $handler->display->display_options['fields']['field_state']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_state']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Company Website */
  $handler->display->display_options['fields']['field_company_website']['id'] = 'field_company_website';
  $handler->display->display_options['fields']['field_company_website']['table'] = 'field_data_field_company_website';
  $handler->display->display_options['fields']['field_company_website']['field'] = 'field_company_website';
  $handler->display->display_options['fields']['field_company_website']['label'] = '';
  $handler->display->display_options['fields']['field_company_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_company_website']['alter']['text'] = '<a href="[field_company_website-url]" target="_blank">[field_company_website-url]</a>';
  $handler->display->display_options['fields']['field_company_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_company_website']['type'] = 'link_url';
  /* Field: Content: Capabilities */
  $handler->display->display_options['fields']['field_capabilities']['id'] = 'field_capabilities';
  $handler->display->display_options['fields']['field_capabilities']['table'] = 'field_data_field_capabilities';
  $handler->display->display_options['fields']['field_capabilities']['field'] = 'field_capabilities';
  $handler->display->display_options['fields']['field_capabilities']['label'] = '';
  $handler->display->display_options['fields']['field_capabilities']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_capabilities']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_capabilities']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_capabilities']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<hr>
<div class="dir-all">

<div class="dir-title"> <i class="icon-asterisk"></i> [title]<br><div class="dir-subtitle"> [field_sub_title]</div></div>

<div class="dir-body"> [body]</div>
<div class="dir-capabilities"> <i class="icon-tags"></i> tags: [field_capabilities]<br> <div class="dir-website"><i class="icon-external-link"></i>[field_company_website] </div></div>

</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'directory_item' => 'directory_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Capabilities (field_capabilities) (selective) */
  $handler->display->display_options['filters']['field_capabilities_tid_selective']['id'] = 'field_capabilities_tid_selective';
  $handler->display->display_options['filters']['field_capabilities_tid_selective']['table'] = 'field_data_field_capabilities';
  $handler->display->display_options['filters']['field_capabilities_tid_selective']['field'] = 'field_capabilities_tid_selective';
  $handler->display->display_options['filters']['field_capabilities_tid_selective']['ui_name'] = 'Capabilities (field_capabilities) (selective)';
  $handler->display->display_options['filters']['field_capabilities_tid_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_capabilities_tid_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_capabilities_tid_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_capabilities_tid_selective']['expose']['label'] = 'select capability';
  $handler->display->display_options['filters']['field_capabilities_tid_selective']['expose']['identifier'] = 'field_capabilities_tid_selective';
  $handler->display->display_options['filters']['field_capabilities_tid_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_capabilities_tid_selective']['selective_display_field'] = 'field_capabilities';
  $handler->display->display_options['filters']['field_capabilities_tid_selective']['selective_display_sort'] = 'ASC';
  /* Filter criterion: State (field_state) (selective) */
  $handler->display->display_options['filters']['field_state_value_selective']['id'] = 'field_state_value_selective';
  $handler->display->display_options['filters']['field_state_value_selective']['table'] = 'field_data_field_state';
  $handler->display->display_options['filters']['field_state_value_selective']['field'] = 'field_state_value_selective';
  $handler->display->display_options['filters']['field_state_value_selective']['ui_name'] = 'State (field_state) (selective)';
  $handler->display->display_options['filters']['field_state_value_selective']['group'] = 1;
  $handler->display->display_options['filters']['field_state_value_selective']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_state_value_selective']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['field_state_value_selective']['expose']['label'] = 'select state';
  $handler->display->display_options['filters']['field_state_value_selective']['expose']['identifier'] = 'field_state_value_selective';
  $handler->display->display_options['filters']['field_state_value_selective']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
  );
  $handler->display->display_options['filters']['field_state_value_selective']['selective_display_field'] = 'field_state';
  $handler->display->display_options['filters']['field_state_value_selective']['selective_display_sort'] = 'ASC';
  $translatables['directory_listing_search'] = array(
    t('Master'),
    t('Directory Listing - Capability'),
    t('more'),
    t('Apply'),
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
    t('Block'),
    t('Industry Capability'),
    t('<a href="[field_company_website-url]" target="_blank">[field_company_website-url]</a>'),
    t('<hr>
<div class="dir-all">

<div class="dir-title"> <i class="icon-asterisk"></i> [title]<br><div class="dir-subtitle"> [field_sub_title]</div></div>

<div class="dir-body"> [body]</div>
<div class="dir-capabilities"> <i class="icon-tags"></i> tags: [field_capabilities]<br> <div class="dir-website"><i class="icon-external-link"></i>[field_company_website] </div></div>

</div>'),
    t('select capability'),
    t('select state'),
  );
  $export['directory_listing_search'] = $view;

  return $export;
}
