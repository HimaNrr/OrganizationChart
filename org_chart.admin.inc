<?php

/**
 * @file
 * org_chart_admin.inc
 */

/**
 * Display the settings form.
 */
function org_chart_admin_settings($form, &$form_state) {
	$form ['org_head_uid'] = array (
			'#type' => 'textfield',
			'#title' => t ( 'Head of organization email address' ),
			'#default_value' => variable_get ( 'org_head_uid' ),
			'#required' => TRUE,
			'#description' => 'Primary email address (UID) of the head of the organization' 
	);
	$form ['org_json_url'] = array (
			'#type' => 'textfield',
			'#title' => t ( 'Organization URL feed' ),
			'#default_value' => variable_get ( 'org_json_url' ),
			'#required' => TRUE,
			'#description' => 'JSON feed of organization' 
	);
	return system_settings_form ( $form );
}
