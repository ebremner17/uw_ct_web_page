(function ($) {
  $(function(){
    // Change the width of the body ckeditor when wide page is checked.
    $widecheck = $('#edit-field-wide-und');
    $textformatter = $('[id ^=edit-body][id $=0-format--2]');
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
