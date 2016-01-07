<?php
    session_start();
    // Suppression des variables de session et de la session
    $_SESSION = array();
    session_destroy();
    // Redirection vers la page principale
    header('Location: index.php');
?>
