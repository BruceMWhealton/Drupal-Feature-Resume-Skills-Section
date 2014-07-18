# Description of the Repository

This is a Drupal Feature, which means that I used the Drupal Features Module to create this Content-Type of Skills as a Drupal 'Feature' along with associated dependencies.  This Content Type would be a section of a person's Resume or CV.

It uses the Resume-RDF Semantic Web Ontology as defined here:  (http://rdfs.org/resume-rdf/ "ResumeRDF Ontology Specification).  

The idea is to create a Resume/CV Content type within Drupal and some of the aspects of a resume or cv will be described in separate content types.  Then the Resume/CV Content type will have fields that link to each of the different Content types in addition to fields that are specific to the Resume/CV content type.  

Other separately defined Content types that will make up the resume, as per this suggested approach, are Formal Education and Professional Training.  Perhaps Employment history could be broken out into a different content type as well.

The full Resume/CV can be presented with the following Drupal modules: Views and/or Display Suite, or Panels.  Views may offer the greatest fexibility.
