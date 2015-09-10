<?php

/**
 * @file
 * Views integration for the adyax_test module
 */

/**
 * Implements hook_views_data()
 */
function adyax_test_views_data() {
  $table = array(
    'field_adyax_test' => array(
      'table' => array(
        'group' => 'Adyax',
        'join' => array(
          'node' => array(
            'left_table' => 'node_revision',
            'left_field' => 'nid',
            'field' => 'nid',
            'type' => 'LEFT',
          ),
        ),
      ),
      'nid' => array(
        'title' => t('Parent Node Id'),
        'help' => t('Parent Node Id'),
        'field' => array(
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_numeric'
        ),
        'sort' => array(
          'handler' => 'views_handler_sort'
        )
      ),
      'field_value' => array(
        'title' => t('Adyax Test Value'),
        'help' => t('Adyax Test Value field'),
        'field' => array(
        'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_string'
        ),
        'sort' => array(
          'handler' => 'views_handler_sort'
        )
      ),
    )
  );
  return $table;
}

