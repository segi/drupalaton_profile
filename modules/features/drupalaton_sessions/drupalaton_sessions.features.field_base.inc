<?php
/**
 * @file
 * drupalaton_sessions.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function drupalaton_sessions_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_session_room'
  $field_bases['field_session_room'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_session_room',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Session A' => 'Session A',
        'Session B' => 'Session B',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_session_type'
  $field_bases['field_session_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_session_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Workshop (3 hours)' => 'Workshop (3 hours)',
        'Workshop (90 minutes)' => 'Workshop (90 minutes)',
        'Session (40 minutes)' => 'Session (40 minutes)',
        'Session (20 minutes)' => 'Session (20 minutes)',
        'Training' => 'Training',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
