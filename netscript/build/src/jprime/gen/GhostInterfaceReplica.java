/* ------------------------- */
/* ------------------------- */
/*         WARNING: */
/*  THIS FILE IS GENERATED! */
/*        DO NOT EDIT! */
/* ------------------------- */
/* ------------------------- */


package jprime.gen;

import jprime.*;
import jprime.variable.*;
import jprime.ModelNodeRecord;
import org.python.core.PyObject;
import org.python.core.Py;
public abstract class GhostInterfaceReplica extends jprime.BaseInterface.BaseInterfaceReplica implements jprime.gen.IGhostInterface {

	/* used to enforce the minimum/maximum child requirement */

	public void enforceChildConstraints() {
		super.enforceChildConstraints();

	}
	public GhostInterfaceReplica(String name, IModelNode parent, jprime.GhostInterface.IGhostInterface referencedNode) {
		super(name,parent,referencedNode);
	}
	public GhostInterfaceReplica(ModelNodeRecord rec){ super(rec); }
	public GhostInterfaceReplica(PyObject[] v, String[] s){super(v,s);}
	/**
	 * @return the interface which this node implements
	 */
	public Class<?> getNodeType() {
		return jprime.GhostInterface.IGhostInterface.class;
	}
	/**
	 * @param used by replicas to do a deep copy of the node.
	 */
	public jprime.ModelNode deepCopy(jprime.ModelNode parent) {
		doing_deep_copy=true;
		jprime.GhostInterface.GhostInterfaceReplica c = new jprime.GhostInterface.GhostInterfaceReplica(this.getName(), (IModelNode)parent,(jprime.GhostInterface.IGhostInterface)this);
		doing_deep_copy=false;
		return c;
	}
	public static boolean isSubType(IModelNode n) {
		return isSubType(n.getTypeId());
	}
	public static boolean isSubType(int id) {
		switch(id) {
			case 1120: //GhostInterfaceReplica
			case 1176: //GhostInterfaceAliasReplica
				return true;
		}
		return false;
	}

	/* (non-Javadoc)
	* @see jprime.IModelNode#getTypeId()
	 */
	public abstract int getTypeId();

	/**
	 * @return the uid of the remote node
	 */
	public jprime.variable.IntegerVariable getRealUid() {
		jprime.variable.IntegerVariable temp = (jprime.variable.IntegerVariable)getAttributeByName(ModelNodeVariable.real_uid());
		if(null!=temp) return temp;
		return (jprime.variable.IntegerVariable)this.getReplicatedNode().getAttributeByName(ModelNodeVariable.real_uid());
	}

	/**
	 * Set the attribute to the static value 'value'.
	 * @param value the value
	 */
	public void setRealUid(String value) {
		jprime.variable.ModelNodeVariable temp = getAttributeByName(jprime.gen.ModelNodeVariable.real_uid());
		if(temp==null){
			temp=new jprime.variable.IntegerVariable(jprime.gen.ModelNodeVariable.real_uid(),value);
			addAttr(temp);
		}
		else{
			if(! (temp instanceof jprime.variable.IntegerVariable)){
				temp=new jprime.variable.IntegerVariable(jprime.gen.ModelNodeVariable.real_uid(),value);
				addAttr(temp);
			}
			else { ((jprime.variable.IntegerVariable)temp).setValue(value); }
		}
	}

	/**
	 * Set the attribute to the static value 'value'.
	 * @param value the value
	 */
	public void setRealUid(long value) {
		jprime.variable.ModelNodeVariable temp = getAttributeByName(jprime.gen.ModelNodeVariable.real_uid());
		if(temp==null){
			temp=new jprime.variable.IntegerVariable(jprime.gen.ModelNodeVariable.real_uid(),value);
			addAttr(temp);
		}
		else{
			if(! (temp instanceof jprime.variable.IntegerVariable)){
				temp=new jprime.variable.IntegerVariable(jprime.gen.ModelNodeVariable.real_uid(),value);
				addAttr(temp);
			}
			else { ((jprime.variable.IntegerVariable)temp).setValue(value); }
		}
	}

	/**
	 * Have the attribute be bound to the value of the symbol at model instantiation.
	 * @param value the value
	 */
	public void setRealUid(jprime.variable.SymbolVariable value) {
		if(value==null)throw new RuntimeException("attr was null");
		if(value.getDBName() != -1) throw new RuntimeException("the attr was already attached to another model node!");
		value.attachToNode(this,jprime.gen.ModelNodeVariable.real_uid());
		addAttr(value);
	}

	/**
	 * @return the id of the remote community
	 */
	public jprime.variable.IntegerVariable getCommunityId() {
		jprime.variable.IntegerVariable temp = (jprime.variable.IntegerVariable)getAttributeByName(ModelNodeVariable.community_id());
		if(null!=temp) return temp;
		return (jprime.variable.IntegerVariable)this.getReplicatedNode().getAttributeByName(ModelNodeVariable.community_id());
	}

	/**
	 * Set the attribute to the static value 'value'.
	 * @param value the value
	 */
	public void setCommunityId(String value) {
		jprime.variable.ModelNodeVariable temp = getAttributeByName(jprime.gen.ModelNodeVariable.community_id());
		if(temp==null){
			temp=new jprime.variable.IntegerVariable(jprime.gen.ModelNodeVariable.community_id(),value);
			addAttr(temp);
		}
		else{
			if(! (temp instanceof jprime.variable.IntegerVariable)){
				temp=new jprime.variable.IntegerVariable(jprime.gen.ModelNodeVariable.community_id(),value);
				addAttr(temp);
			}
			else { ((jprime.variable.IntegerVariable)temp).setValue(value); }
		}
	}

	/**
	 * Set the attribute to the static value 'value'.
	 * @param value the value
	 */
	public void setCommunityId(long value) {
		jprime.variable.ModelNodeVariable temp = getAttributeByName(jprime.gen.ModelNodeVariable.community_id());
		if(temp==null){
			temp=new jprime.variable.IntegerVariable(jprime.gen.ModelNodeVariable.community_id(),value);
			addAttr(temp);
		}
		else{
			if(! (temp instanceof jprime.variable.IntegerVariable)){
				temp=new jprime.variable.IntegerVariable(jprime.gen.ModelNodeVariable.community_id(),value);
				addAttr(temp);
			}
			else { ((jprime.variable.IntegerVariable)temp).setValue(value); }
		}
	}

	/**
	 * Have the attribute be bound to the value of the symbol at model instantiation.
	 * @param value the value
	 */
	public void setCommunityId(jprime.variable.SymbolVariable value) {
		if(value==null)throw new RuntimeException("attr was null");
		if(value.getDBName() != -1) throw new RuntimeException("the attr was already attached to another model node!");
		value.attachToNode(this,jprime.gen.ModelNodeVariable.community_id());
		addAttr(value);
	}

	/**
	 * @return a list of ids of the possible type of attribute this model node type can have
	 */
	public java.util.ArrayList<Integer> getAttrIds() {
		return jprime.gen.GhostInterface.attrIds;
	}

	/**
	 * @param visitor a generic visitor
	 */
	public abstract void accept(jprime.visitors.IGenericVisitor visitor);
}