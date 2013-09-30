<!--
	pfSense_MODULE:	footer
-->

		</div> <!-- Right DIV -->
	
	</div> <!-- Content DIV -->
	
	<div id="footer">
	<a target="_blank" href="<?=$g['product_website_footer']?>" class="redlnk"><?=$g['product_name']?></a> is &copy;
	 <?=$g['product_copyright_years']?> by <a href="<?=$g['product_copyright_url']?>" class="tblnk"><?=$g['product_copyright']?></a>. All Rights Reserved.
	[<a href="/license.php" class="tblnk">view license</a>] 
	</div> <!-- Footer DIV -->

</div> <!-- Wrapper Div -->

<?php outputJavaScriptFileInline("/usr/local/www/themes/{$g['theme']}/bottom-loader.js");
/* Disable form autocomplete on all but the login screen. */
if (basename($_SERVER["SCRIPT_FILENAME"] != "index.php") && !$allowautocomplete): ?>
<script type="text/javascript">
//<![CDATA[
(function ($) {
	$("input").attr("autocomplete","off");
})(jQuery);
//]]>
</script>
<?php endif; ?>
	<script src="/themes/<?= $g['theme'] ?>/js/jquery-1.8.3.min.js"></script>
  	<script src="/themes/<?= $g['theme'] ?>/js/jquery.nicescroll.js" type="text/javascript"></script>
   	<script type="text/javascript" src="/themes/<?= $g['theme'] ?>/assets/jquery-slimscroll/jquery-ui-1.9.2.custom.min.js"></script>
   	<script type="text/javascript" src="/themes/<?= $g['theme'] ?>/assets/jquery-slimscroll/jquery.slimscroll.min.js"></script>
   	<!--<script src="metrolab/assets/fullcalendar/fullcalendar/fullcalendar.min.js"></script>-->
   	<script src="/themes/<?= $g['theme'] ?>/assets/bootstrap/js/bootstrap.min.js"></script>
   	<!-- ie8 fixes -->
   	<!--[if lt IE 9]>
   	<script src="/themes/<?= $g['theme'] ?>/js/excanvas.js"></script>
   	<script src="/themes/<?= $g['theme'] ?>/js/respond.js"></script>
   	<![endif]-->
   	<!--<script src="metrolab/assets/jquery-easy-pie-chart/jquery.easy-pie-chart.js" type="text/javascript"></script>-->
   	<script src="/themes/<?= $g['theme'] ?>/js/jquery.sparkline.js" type="text/javascript"></script>
   	<!--<script src="metrolab/assets/chart-master/Chart.js"></script>-->
   	<!--common script for all pages-->
   	<script src="/themes/<?= $g['theme'] ?>/js/common-scripts.js"></script>
