<?php
/**
 * @file
 * itm_carreras.features.inc
 */

/**
 * Implements hook_views_api().
 */
function itm_carreras_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function itm_carreras_node_info() {
  $items = array(
    'noticia' => array(
      'name' => t('Noticia'),
      'base' => 'node_content',
      'description' => t('tipo de contenido para la creacion de noticias reclacionadas a la carrera de informatica y tenologia multimedia'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
