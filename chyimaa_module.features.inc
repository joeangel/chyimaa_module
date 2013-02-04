<?php
/**
 * @file
 * chyimaa_module.features.inc
 */

/**
 * Implements hook_views_api().
 */
function chyimaa_module_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_eck_bundle_info().
 */
function chyimaa_module_eck_bundle_info() {
  $items = array(
  '_r__r' => array(
  'machine_name' => '_r__r',
  'entity_type' => '_r',
  'name' => '_r',
  'label' => '存貨記錄',
),
  'line_item_line_item' => array(
  'machine_name' => 'line_item_line_item',
  'entity_type' => 'line_item',
  'name' => 'line_item',
  'label' => '條列項目',
),
  'report_report' => array(
  'machine_name' => 'report_report',
  'entity_type' => 'report',
  'name' => 'report',
  'label' => '結報',
),
  'stock_adjustment_destroy' => array(
  'machine_name' => 'stock_adjustment_destroy',
  'entity_type' => 'stock_adjustment',
  'name' => 'destroy',
  'label' => '銷毀',
),
  'stock_adjustment_inbound' => array(
  'machine_name' => 'stock_adjustment_inbound',
  'entity_type' => 'stock_adjustment',
  'name' => 'inbound',
  'label' => '進貨',
),
  'stock_adjustment_order' => array(
  'machine_name' => 'stock_adjustment_order',
  'entity_type' => 'stock_adjustment',
  'name' => 'order',
  'label' => '訂單',
),
  'stock_adjustment_outbound' => array(
  'machine_name' => 'stock_adjustment_outbound',
  'entity_type' => 'stock_adjustment',
  'name' => 'outbound',
  'label' => '出貨 ',
),
  'stock_adjustment_stock_adjustment' => array(
  'machine_name' => 'stock_adjustment_stock_adjustment',
  'entity_type' => 'stock_adjustment',
  'name' => 'stock_adjustment',
  'label' => '存貨異動單據',
),
  'stock_manager_cotton' => array(
  'machine_name' => 'stock_manager_cotton',
  'entity_type' => 'stock_manager',
  'name' => 'cotton',
  'label' => '布料',
),
  'stock_manager_goods' => array(
  'machine_name' => 'stock_manager_goods',
  'entity_type' => 'stock_manager',
  'name' => 'goods',
  'label' => '商品',
),
  'stock_manager_matter' => array(
  'machine_name' => 'stock_manager_matter',
  'entity_type' => 'stock_manager',
  'name' => 'matter',
  'label' => '物料',
),
  'stock_manager_part' => array(
  'machine_name' => 'stock_manager_part',
  'entity_type' => 'stock_manager',
  'name' => 'part',
  'label' => '部件',
),
  'stock_manager_stock' => array(
  'machine_name' => 'stock_manager_stock',
  'entity_type' => 'stock_manager',
  'name' => 'stock',
  'label' => '存貨',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function chyimaa_module_eck_entity_type_info() {
$items = array(
       '_r' => array(
  'name' => '_r',
  'label' => '存貨記錄',
  'properties' => array(),
),
       'line_item' => array(
  'name' => 'line_item',
  'label' => '條列項目',
  'properties' => array(),
),
       'report' => array(
  'name' => 'report',
  'label' => '結報',
  'properties' => array(),
),
       'stock_adjustment' => array(
  'name' => 'stock_adjustment',
  'label' => '存貨異動單據',
  'properties' => array(),
),
       'stock_manager' => array(
  'name' => 'stock_manager',
  'label' => '存貨管理',
  'properties' => array(),
),
  );
  return $items;
}

/**
 * Implements hook_default_profile2_type().
 */
function chyimaa_module_default_profile2_type() {
  $items = array();
  $items['profile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "profile",
    "label" : "\\u901a\\u8a0a\\u9304",
    "weight" : "0",
    "data" : { "registration" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
