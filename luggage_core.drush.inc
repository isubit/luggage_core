<?php

/**
 * Implements hook_drush_command()
 */
function luggage_core_drush_command() {
  $items['luggage-versions'] = array(
    'description' => "Get the Luggage Version numbers",
    'aliases' => array('lv'),
    'options' => array(
      'product' => "The product you want the version for Eg 'LUGGAGE' or 'LUGGAGE_ISU'",
    ),
  );

  return $items;
}

function drush_luggage_core_luggage_versions() {
  $prod = strtoupper(drush_get_option('product'));
  $versions = _luggage_core_get_luggage_versions($prod);
  if(is_array($versions)) {
    foreach ($versions as $product => $version) {
      echo $product . ": " . $version . "\n";
    }
  }
  else {
    echo $versions . "\n";
  }
}
