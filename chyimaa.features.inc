<?php
/**
 * @file
 * chyimaa.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function chyimaa_eck_bundle_info() {
  $items = array(
  'resources_cotton' => array(
  'machine_name' => 'resources_cotton',
  'entity_type' => 'resources',
  'name' => 'cotton',
  'label' => '布料',
),
  'resources_goods' => array(
  'machine_name' => 'resources_goods',
  'entity_type' => 'resources',
  'name' => 'goods',
  'label' => '商品',
),
  'resources_matter' => array(
  'machine_name' => 'resources_matter',
  'entity_type' => 'resources',
  'name' => 'matter',
  'label' => '物料',
),
  'resources_part' => array(
  'machine_name' => 'resources_part',
  'entity_type' => 'resources',
  'name' => 'part',
  'label' => '部件',
),
  'resources_resources' => array(
  'machine_name' => 'resources_resources',
  'entity_type' => 'resources',
  'name' => 'resources',
  'label' => ' 資源',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function chyimaa_eck_entity_type_info() {
$items = array(
       'resources' => array(
  'name' => 'resources',
  'label' => ' 資源',
  'properties' => array(
    'title' => array(
      'label' => 'Title',
      'type' => 'text',
      'behavior' => 'title',
    ),
  ),
),
  );
  return $items;
}
