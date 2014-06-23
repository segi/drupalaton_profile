<?php
/**
 * @file
 * drupalaton_session_proposal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function drupalaton_session_proposal_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function drupalaton_session_proposal_default_entityform_type() {
  $items = array();
  $items['session_proposal'] = entity_import('entityform_type', '{
    "type" : "session_proposal",
    "label" : "Session proposal",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submission_rules" : [],
      "validation_rules" : [],
      "submit_button_text" : "",
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "1" : "1",
        "2" : "2",
        "3" : "3",
        "4" : "4",
        "5" : "5",
        "7" : "7",
        "6" : "6"
      },
      "resubmit_action" : "new",
      "access_rules" : [],
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EThis will be the biggest camp yet, so we need your awesome Drupal sessions. Submit your proposal below and the camp organisers will pick those topics which benefit and excite attendees from Drupal community, from all topics of interest and skill levels. We are aiming for a balanced set of sessions to engage various parts of the community and are doing our best to give visibility to as many presenters as possible.\\u003C\\/p\\u003E\\r\\n",
        "format" : "filtered_html"
      }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}
