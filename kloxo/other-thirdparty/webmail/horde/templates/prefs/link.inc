<a href="<?php echo (isset($_prefs[$pref]['url'])) ? Horde::applicationUrl($_prefs[$pref]['url']) : $_prefs[$pref]['xurl'] ?>"<?php if (!empty($_prefs[$pref]['target'])) echo ' target="' . htmlspecialchars($_prefs[$pref]['target']) . '"' ?>><?php if (isset($_prefs[$pref]['img'])) echo Horde::img($_prefs[$pref]['img'], $_prefs[$pref]['desc'], 'hspace="3"') ?><strong><?php echo $_prefs[$pref]['desc'] ?></strong></a>&nbsp;<?php echo $helplink ?><br />