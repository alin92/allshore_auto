<?php
/**
 * @file
 * allshore_auto.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function allshore_auto_eck_bundle_info() {
  $items = array(
  'vehicle_car' => array(
  'machine_name' => 'vehicle_car',
  'entity_type' => 'vehicle',
  'name' => 'car',
  'label' => 'Car',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function allshore_auto_eck_entity_type_info() {
$items = array(
       'vehicle' => array(
  'name' => 'vehicle',
  'label' => 'Vehicle',
  'properties' => array(
    'title' => array(
      'label' => 'Title',
      'type' => 'text',
      'behavior' => 'title',
    ),
    'created' => array(
      'label' => 'Created',
      'type' => 'integer',
      'behavior' => 'created',
    ),
  ),
),
  );
  return $items;
}
