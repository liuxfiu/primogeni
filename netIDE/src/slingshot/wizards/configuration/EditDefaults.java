package slingshot.wizards.configuration;

/*
 * Copyright (c) 2011 Florida International University.
 *
 * Permission is hereby granted, free of charge, to any individual or
 * institution obtaining a copy of this software and associated
 * documentation files (the "software"), to use, copy, modify, and
 * distribute without restriction.
 *
 * The software is provided "as is", without warranty of any kind,
 * express or implied, including but not limited to the warranties of
 * merchantability, fitness for a particular purpose and
 * non-infringement.  In no event shall Florida International
 * University be liable for any claim, damages or other liability,
 * whether in an action of contract, tort or otherwise, arising from,
 * out of or in connection with the software or the use or other
 * dealings in the software.
 *
 * This software is developed and maintained by
 *
 *   Modeling and Networking Systems Research Group
 *   School of Computing and Information Sciences
 *   Florida International University
 *   Miami, Florida 33199, USA
 *
 * You can find our research at http://www.primessf.net/.
 */

import java.io.File;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;

import org.eclipse.jface.viewers.IStructuredSelection;
import org.eclipse.jface.wizard.Wizard;
import org.eclipse.ui.INewWizard;
import org.eclipse.ui.IWorkbench;

import slingshot.wizards.configuration.EditDefaultsPage.Cls;

/**
 *
 * @author Nathanael Van Vorst
 */
public class EditDefaults extends Wizard implements INewWizard {
	public static String FILE_NAME = "/.default_values";
	public static final String ID = "slingshot.wizards.configuration.EditDefaults";
	
	/** The name displayed on top of the Wizard's window */
	private static final String WIZARD_NAME = "View/Edit Default Values";	

	/** The workbench in use when the wizard is called */
	IWorkbench _workbench;
	/** The user's selection when the wizard is called */
	IStructuredSelection _selection;

	/** The Wizard Page that asks for the configuration parameters */
	protected EditDefaultsPage valuesPage;
	private final File configfile;
	
	/**
	 * The Constructor for this class.
	 * It only sets the Wizard Name.
	 */
	public EditDefaults(final String resultsPath) {
		setWindowTitle(WIZARD_NAME);
		this.configfile = new File(resultsPath+FILE_NAME);
	}

	/**
	 * Adds the pages that the Wizard will display.
	 */
	@Override
	public void addPages(){
		super.addPages();
		this.valuesPage = new EditDefaultsPage(WIZARD_NAME, configfile);
		addPage(this.valuesPage);
	}

	/**
	 * Method called when the Wizard is first created.
	 * Gets the workbench and the user's selection.
	 *
	 * @param workbench				The current Workbench
	 * @param selection				The user's selection
	 */
	@Override
	public void init(IWorkbench workbench, IStructuredSelection selection) {
		_workbench = workbench;
		_selection = selection;
	}

	/**
	 * Method called as soon as the Wizard is finished.
	 * Writes the Slingshot Configuration File with the new parameters.
	 *
	 * @return boolean 				TRUE if the Wizard finished correctly, FALSE otherwise
	 */
	@Override
	public boolean performFinish() {
		this.valuesPage.save();
		return true;
	}
	
	@Override
	public boolean canFinish() {
		return valuesPage.isPageComplete();
	}
	
	public static Map<String,String> getDefaultValues(String resultsPath) {
		LinkedList<Cls> roots =new LinkedList<EditDefaultsPage.Cls>();
		Map<String,String> rv = new HashMap<String,String>();
		EditDefaultsPage.loadDefaultValues(new File(resultsPath+"/"+FILE_NAME), roots);
		for(Cls c : roots) {
			EditDefaultsPage.save(c, rv);
		}
		return rv;
	}
}