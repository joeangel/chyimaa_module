<?php
/**
 * @file
 * chyimaa_module.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function chyimaa_module_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'address_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = '通訊錄';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '通訊錄';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = '更多';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = '套用';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重設';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = '排序依據';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = '遞增';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = '遞減';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => '進階選項',
    ),
    'field_contact_group_tid' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- 全部 -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = '位移';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« 第一頁';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ 上一頁';
  $handler->display->display_options['pager']['options']['tags']['next'] = '下一頁 ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '最後一頁 »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_contact_group' => 'field_contact_group',
    'field__idcontact_custom_id' => 'field__idcontact_custom_id',
    'field_contact_name' => 'field_contact_name',
    'field_contact_registration_numbe' => 'field_contact_registration_numbe',
    'field_contact_responsible_person' => 'field_contact_responsible_person',
    'field_contact_fax_number' => 'field_contact_fax_number',
    'field_contact_phone_number' => 'field_contact_phone_number',
    'field_contact_contact' => 'field_contact_contact',
    'field_contact_zipcode' => 'field_contact_zipcode',
    'field_contact_address' => 'field_contact_address',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = 'field__idcontact_custom_id';
  $handler->display->display_options['style_options']['info'] = array(
    'field_contact_group' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field__idcontact_custom_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_registration_numbe' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_responsible_person' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_fax_number' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_phone_number' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_zipcode' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* 頁尾: 全域: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = '資料筆數';
  $handler->display->display_options['footer']['result']['empty'] = TRUE;
  $handler->display->display_options['footer']['result']['content'] = '目前顯示 @current_record_count 筆資料，共 @total 筆資料。';
  /* 關聯: 個人資訊: 使用者 uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* 欄位: 個人資訊: 分類 */
  $handler->display->display_options['fields']['field_contact_group']['id'] = 'field_contact_group';
  $handler->display->display_options['fields']['field_contact_group']['table'] = 'field_data_field_contact_group';
  $handler->display->display_options['fields']['field_contact_group']['field'] = 'field_contact_group';
  /* 欄位: 個人資訊: 自定ID */
  $handler->display->display_options['fields']['field__idcontact_custom_id']['id'] = 'field__idcontact_custom_id';
  $handler->display->display_options['fields']['field__idcontact_custom_id']['table'] = 'field_data_field__idcontact_custom_id';
  $handler->display->display_options['fields']['field__idcontact_custom_id']['field'] = 'field__idcontact_custom_id';
  /* 欄位: 使用者: 名稱 */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'user';
  /* 欄位: 個人資訊: 抬頭 */
  $handler->display->display_options['fields']['field_contact_name']['id'] = 'field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['table'] = 'field_data_field_contact_name';
  $handler->display->display_options['fields']['field_contact_name']['field'] = 'field_contact_name';
  /* 欄位: 個人資訊: 統一編號 */
  $handler->display->display_options['fields']['field_contact_registration_numbe']['id'] = 'field_contact_registration_numbe';
  $handler->display->display_options['fields']['field_contact_registration_numbe']['table'] = 'field_data_field_contact_registration_numbe';
  $handler->display->display_options['fields']['field_contact_registration_numbe']['field'] = 'field_contact_registration_numbe';
  /* 欄位: 個人資訊: 公司負責人 */
  $handler->display->display_options['fields']['field_contact_responsible_person']['id'] = 'field_contact_responsible_person';
  $handler->display->display_options['fields']['field_contact_responsible_person']['table'] = 'field_data_field_contact_responsible_person';
  $handler->display->display_options['fields']['field_contact_responsible_person']['field'] = 'field_contact_responsible_person';
  /* 欄位: 個人資訊: 公司傳真 */
  $handler->display->display_options['fields']['field_contact_fax_number']['id'] = 'field_contact_fax_number';
  $handler->display->display_options['fields']['field_contact_fax_number']['table'] = 'field_data_field_contact_fax_number';
  $handler->display->display_options['fields']['field_contact_fax_number']['field'] = 'field_contact_fax_number';
  /* 欄位: 個人資訊: 公司電話 */
  $handler->display->display_options['fields']['field_contact_phone_number']['id'] = 'field_contact_phone_number';
  $handler->display->display_options['fields']['field_contact_phone_number']['table'] = 'field_data_field_contact_phone_number';
  $handler->display->display_options['fields']['field_contact_phone_number']['field'] = 'field_contact_phone_number';
  /* 欄位: 個人資訊: 聯絡人 + 手機 */
  $handler->display->display_options['fields']['field_contact_contact']['id'] = 'field_contact_contact';
  $handler->display->display_options['fields']['field_contact_contact']['table'] = 'field_data_field_contact_contact';
  $handler->display->display_options['fields']['field_contact_contact']['field'] = 'field_contact_contact';
  /* 欄位: 個人資訊: 郵遞區號 */
  $handler->display->display_options['fields']['field_contact_zipcode']['id'] = 'field_contact_zipcode';
  $handler->display->display_options['fields']['field_contact_zipcode']['table'] = 'field_data_field_contact_zipcode';
  $handler->display->display_options['fields']['field_contact_zipcode']['field'] = 'field_contact_zipcode';
  /* 欄位: 個人資訊: 地址 */
  $handler->display->display_options['fields']['field_contact_address']['id'] = 'field_contact_address';
  $handler->display->display_options['fields']['field_contact_address']['table'] = 'field_data_field_contact_address';
  $handler->display->display_options['fields']['field_contact_address']['field'] = 'field_contact_address';
  /* 欄位: 使用者: 啟用 */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'user';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Filter criterion: 個人資訊: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: 個人資訊: 分類 (field_contact_group) */
  $handler->display->display_options['filters']['field_contact_group_tid']['id'] = 'field_contact_group_tid';
  $handler->display->display_options['filters']['field_contact_group_tid']['table'] = 'field_data_field_contact_group';
  $handler->display->display_options['filters']['field_contact_group_tid']['field'] = 'field_contact_group_tid';
  $handler->display->display_options['filters']['field_contact_group_tid']['value'] = '';
  $handler->display->display_options['filters']['field_contact_group_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_contact_group_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_contact_group_tid']['expose']['operator_id'] = 'field_contact_group_tid_op';
  $handler->display->display_options['filters']['field_contact_group_tid']['expose']['label'] = '分類 (field_contact_group)';
  $handler->display->display_options['filters']['field_contact_group_tid']['expose']['operator'] = 'field_contact_group_tid_op';
  $handler->display->display_options['filters']['field_contact_group_tid']['expose']['identifier'] = 'field_contact_group_tid';
  $handler->display->display_options['filters']['field_contact_group_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_contact_group_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_contact_group_tid']['vocabulary'] = 'contact_group';
  $handler->display->display_options['filters']['field_contact_group_tid']['hierarchy'] = 1;
  /* Filter criterion: 使用者: 啟用 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'user';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'address-list';
  $translatables['address_list'] = array(
    t('Master'),
    t('通訊錄'),
    t('更多'),
    t('套用'),
    t('重設'),
    t('排序依據'),
    t('遞增'),
    t('遞減'),
    t('Items per page'),
    t('- 全部 -'),
    t('位移'),
    t('« 第一頁'),
    t('‹ 上一頁'),
    t('下一頁 ›'),
    t('最後一頁 »'),
    t('資料筆數'),
    t('目前顯示 @current_record_count 筆資料，共 @total 筆資料。'),
    t('使用者'),
    t('分類'),
    t('自定ID'),
    t('名稱'),
    t('抬頭'),
    t('統一編號'),
    t('公司負責人'),
    t('公司傳真'),
    t('公司電話'),
    t('聯絡人 + 手機'),
    t('郵遞區號'),
    t('地址'),
    t('啟用'),
    t('分類 (field_contact_group)'),
    t('Page'),
  );
  $export['address_list'] = $view;

  return $export;
}
