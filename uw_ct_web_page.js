(function ($) {
  $(function(){
    $widecheck = $('#edit-field-wide-und');
    $textformatter = $('#edit-body-und-0-format--2');
    //set_wide_text_format($widecheck.checked);
    $widecheck.click(function() {
      set_wide_text_format(this.checked);
    })
    function set_wide_text_format($checked) {
      if ($checked) {
        $textformatter.val('uw_tf_standard_wide').change();
      } else {
        $textformatter.val('uw_tf_standard').change();
      }
    }
  });
}(jQuery));
