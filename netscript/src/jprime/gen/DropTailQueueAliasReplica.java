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
public abstract class DropTailQueueAliasReplica extends jprime.NicQueue.NicQueueAliasReplica implements jprime.gen.IDropTailQueueAlias {
	public DropTailQueueAliasReplica(String name, IModelNode parent, jprime.ModelNodeAlias referencedNode) {
		super(name, parent,referencedNode);
	}
	public DropTailQueueAliasReplica(ModelNodeRecord rec){ super(rec); }
	public DropTailQueueAliasReplica(PyObject[] v, String[] s){super(v,s);}
	/**
	 * @return the interface which this node implements
	 */
	public Class<?> getNodeType() {
		return jprime.DropTailQueue.IDropTailQueue.class;
	}
	/**
	 * @param used by replicas to do a deep copy of the node.
	 */
	public jprime.ModelNode deepCopy(jprime.ModelNode parent) {
		doing_deep_copy=true;
		jprime.DropTailQueue.DropTailQueueAliasReplica c = new jprime.DropTailQueue.DropTailQueueAliasReplica(this.getName(), (IModelNode)parent,(jprime.DropTailQueue.DropTailQueueAlias)this.getReplicatedNode());
		doing_deep_copy=false;
		return c;
	}
	public static boolean isSubType(IModelNode n) {
		return isSubType(n.getTypeId());
	}
	public static boolean isSubType(int id) {
		switch(id) {
			case 1180: //DropTailQueueAliasReplica
				return true;
		}
		return false;
	}

	/* (non-Javadoc)
	* @see jprime.IModelNode#getTypeId()
	 */
	public abstract int getTypeId();

	/**
	 * @return a list of ids of the possible type of attribute this model node type can have
	 */
	public java.util.ArrayList<Integer> getAttrIds() {
		return jprime.gen.DropTailQueue.attrIds;
	}

	/**
	 * @param kid the child to add
	 */

	/**
	 * @param visitor a generic visitor
	 */
	public abstract void accept(jprime.visitors.IGenericVisitor visitor);
}