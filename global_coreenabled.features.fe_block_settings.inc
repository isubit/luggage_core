<?php
/**
 * @file
 * global_coreenabled.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function global_coreenabled_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'help',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'suitcase' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'suitcase',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-management'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 1,
      ),
      'suitcase' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'suitcase',
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'suitcase' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'suitcase',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 10,
      ),
      'suitcase' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'suitcase',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
