<?php

    //Démarrage de la session
    session_start();

    try {   
        //Connexion à la base upmc_info
        $bdd = new PDO('mysql:host=localhost;dbname=upmc_info', 'root', '');
    }
    catch(Exception $e) {  
        //En cas d'erreur, on affiche un message et on arrête tout
        die('Erreur : '.$e->getMessage());
    }
    
    $nom = $_POST['nom'];
    $mdp = $_POST['mdp'];

    
    //Préparation de la requête 
    $reponse = $bdd->prepare("SELECT * FROM etudiant WHERE nom = ? AND mot_de_passe = ?");
    $reponse->bindParam(1, $nom);
    $reponse->bindParam(2, $mdp);
    
    //Lancement de la requête
    $reponse->execute();
    

    //Stockage des informations de l'étudiant dans des variables de SESSION afin de les utiliser ailleurs
    while ($donnees = $reponse->fetch()) { 
        $_SESSION['ID_etudiant'] = $donnees['ID_etudiant'];
        $_SESSION['nom'] = $donnees['nom'];
        $_SESSION['prenom'] = $donnees['prenom'];
        $_SESSION['date_naissance'] = $donnees['date_naissance'];
        $_SESSION['ID_spacialite'] = $donnees['ID_specialite'];
        $_SESSION['ID_parcours'] = $donnees['ID_parcours'];
        $_SESSION['semestre'] = $donnees['semestre'];
    } 
    
    if(isset($_SESSION['nom'])) {
        header('Location: choix_ues.php');
    }
    else {
        header('Location: index.php');
    }
?>