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
public abstract class TrafficAliasReplica extends jprime.ModelNodeAliasReplica implements jprime.gen.ITrafficAlias {
	public TrafficAliasReplica(String name, IModelNode parent, jprime.ModelNodeAlias referencedNode) {
		super(name,parent,referencedNode);
	}
	public TrafficAliasReplica(ModelNodeRecord rec){ super(rec); }
	public TrafficAliasReplica(PyObject[] v, String[] s){super(v,s);}
	/**
	 * @return the interface which this node implements
	 */
	public Class<?> getNodeType() {
		return jprime.Traffic.ITraffic.class;
	}
	/**
	 * @param used by replicas to do a deep copy of the node.
	 */
	public jprime.ModelNode deepCopy(jprime.ModelNode parent) {
		doing_deep_copy=true;
		jprime.Traffic.TrafficAliasReplica c = new jprime.Traffic.TrafficAliasReplica(this.getName(), (IModelNode)parent,(jprime.Traffic.TrafficAlias)this.getReplicatedNode());
		doing_deep_copy=false;
		return c;
	}
	public static boolean isSubType(IModelNode n) {
		return isSubType(n.getTypeId());
	}
	public static boolean isSubType(int id) {
		switch(id) {
			case 1185: //TrafficAliasReplica
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
		return jprime.gen.Traffic.attrIds;
	}

	/**
	  * Create a new child of type jprime.TrafficType.TrafficType and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.TrafficType.ITrafficType createTrafficType() {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create a a new child of type jprime.TrafficType.TrafficType, and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.TrafficType.ITrafficType createTrafficType(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.TrafficType.TrafficType and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @return the new child
	  */
	public jprime.TrafficType.ITrafficType createTrafficType(String name) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Add a new child of type jprime.TrafficType.TrafficType.
	  */
	public void addTrafficType(jprime.TrafficType.TrafficType kid) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.TrafficType.TrafficTypeReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.TrafficType.ITrafficType createTrafficTypeReplica(jprime.TrafficType.ITrafficType to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create replica new child of type jprime.TrafficType.TrafficTypeReplica, which points to to_alias, and add it as a child to this node.
	  * @param to_alias the node to point to
	  * @return the new child
	  */
	public jprime.TrafficType.ITrafficType replicateTrafficType(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.TrafficType.TrafficTypeReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.TrafficType.ITrafficType createTrafficTypeReplica(String name, jprime.TrafficType.ITrafficType to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * return traffic types of the traffic
	  */
	public jprime.util.ChildList<jprime.TrafficType.ITrafficType> getTraffic_types() {
		throw new RuntimeException("Aliases do not have children!");
	}

	/**
	  * Create a new child of type jprime.FluidTraffic.FluidTraffic and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.FluidTraffic.IFluidTraffic createFluidTraffic() {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create a a new child of type jprime.FluidTraffic.FluidTraffic, and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.FluidTraffic.IFluidTraffic createFluidTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.FluidTraffic.FluidTraffic and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @return the new child
	  */
	public jprime.FluidTraffic.IFluidTraffic createFluidTraffic(String name) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Add a new child of type jprime.FluidTraffic.FluidTraffic.
	  */
	public void addFluidTraffic(jprime.FluidTraffic.FluidTraffic kid) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.FluidTraffic.FluidTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.FluidTraffic.IFluidTraffic createFluidTrafficReplica(jprime.FluidTraffic.IFluidTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create replica new child of type jprime.FluidTraffic.FluidTrafficReplica, which points to to_alias, and add it as a child to this node.
	  * @param to_alias the node to point to
	  * @return the new child
	  */
	public jprime.FluidTraffic.IFluidTraffic replicateFluidTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.FluidTraffic.FluidTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.FluidTraffic.IFluidTraffic createFluidTrafficReplica(String name, jprime.FluidTraffic.IFluidTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * Create a new child of type jprime.DynamicTrafficType.DynamicTrafficType and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.DynamicTrafficType.IDynamicTrafficType createDynamicTrafficType() {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create a a new child of type jprime.DynamicTrafficType.DynamicTrafficType, and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.DynamicTrafficType.IDynamicTrafficType createDynamicTrafficType(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.DynamicTrafficType.DynamicTrafficType and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @return the new child
	  */
	public jprime.DynamicTrafficType.IDynamicTrafficType createDynamicTrafficType(String name) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Add a new child of type jprime.DynamicTrafficType.DynamicTrafficType.
	  */
	public void addDynamicTrafficType(jprime.DynamicTrafficType.DynamicTrafficType kid) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.DynamicTrafficType.DynamicTrafficTypeReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.DynamicTrafficType.IDynamicTrafficType createDynamicTrafficTypeReplica(jprime.DynamicTrafficType.IDynamicTrafficType to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create replica new child of type jprime.DynamicTrafficType.DynamicTrafficTypeReplica, which points to to_alias, and add it as a child to this node.
	  * @param to_alias the node to point to
	  * @return the new child
	  */
	public jprime.DynamicTrafficType.IDynamicTrafficType replicateDynamicTrafficType(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.DynamicTrafficType.DynamicTrafficTypeReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.DynamicTrafficType.IDynamicTrafficType createDynamicTrafficTypeReplica(String name, jprime.DynamicTrafficType.IDynamicTrafficType to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * Create a new child of type jprime.StaticTrafficType.StaticTrafficType and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.StaticTrafficType.IStaticTrafficType createStaticTrafficType() {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create a a new child of type jprime.StaticTrafficType.StaticTrafficType, and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.StaticTrafficType.IStaticTrafficType createStaticTrafficType(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.StaticTrafficType.StaticTrafficType and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @return the new child
	  */
	public jprime.StaticTrafficType.IStaticTrafficType createStaticTrafficType(String name) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Add a new child of type jprime.StaticTrafficType.StaticTrafficType.
	  */
	public void addStaticTrafficType(jprime.StaticTrafficType.StaticTrafficType kid) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.StaticTrafficType.StaticTrafficTypeReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.StaticTrafficType.IStaticTrafficType createStaticTrafficTypeReplica(jprime.StaticTrafficType.IStaticTrafficType to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create replica new child of type jprime.StaticTrafficType.StaticTrafficTypeReplica, which points to to_alias, and add it as a child to this node.
	  * @param to_alias the node to point to
	  * @return the new child
	  */
	public jprime.StaticTrafficType.IStaticTrafficType replicateStaticTrafficType(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.StaticTrafficType.StaticTrafficTypeReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.StaticTrafficType.IStaticTrafficType createStaticTrafficTypeReplica(String name, jprime.StaticTrafficType.IStaticTrafficType to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * Create a new child of type jprime.DistributedTrafficType.DistributedTrafficType and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.DistributedTrafficType.IDistributedTrafficType createDistributedTrafficType() {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create a a new child of type jprime.DistributedTrafficType.DistributedTrafficType, and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.DistributedTrafficType.IDistributedTrafficType createDistributedTrafficType(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.DistributedTrafficType.DistributedTrafficType and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @return the new child
	  */
	public jprime.DistributedTrafficType.IDistributedTrafficType createDistributedTrafficType(String name) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Add a new child of type jprime.DistributedTrafficType.DistributedTrafficType.
	  */
	public void addDistributedTrafficType(jprime.DistributedTrafficType.DistributedTrafficType kid) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.DistributedTrafficType.DistributedTrafficTypeReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.DistributedTrafficType.IDistributedTrafficType createDistributedTrafficTypeReplica(jprime.DistributedTrafficType.IDistributedTrafficType to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create replica new child of type jprime.DistributedTrafficType.DistributedTrafficTypeReplica, which points to to_alias, and add it as a child to this node.
	  * @param to_alias the node to point to
	  * @return the new child
	  */
	public jprime.DistributedTrafficType.IDistributedTrafficType replicateDistributedTrafficType(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.DistributedTrafficType.DistributedTrafficTypeReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.DistributedTrafficType.IDistributedTrafficType createDistributedTrafficTypeReplica(String name, jprime.DistributedTrafficType.IDistributedTrafficType to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * Create a new child of type jprime.CNFTraffic.CNFTraffic and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.CNFTraffic.ICNFTraffic createCNFTraffic() {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create a a new child of type jprime.CNFTraffic.CNFTraffic, and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.CNFTraffic.ICNFTraffic createCNFTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.CNFTraffic.CNFTraffic and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @return the new child
	  */
	public jprime.CNFTraffic.ICNFTraffic createCNFTraffic(String name) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Add a new child of type jprime.CNFTraffic.CNFTraffic.
	  */
	public void addCNFTraffic(jprime.CNFTraffic.CNFTraffic kid) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.CNFTraffic.CNFTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.CNFTraffic.ICNFTraffic createCNFTrafficReplica(jprime.CNFTraffic.ICNFTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create replica new child of type jprime.CNFTraffic.CNFTrafficReplica, which points to to_alias, and add it as a child to this node.
	  * @param to_alias the node to point to
	  * @return the new child
	  */
	public jprime.CNFTraffic.ICNFTraffic replicateCNFTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.CNFTraffic.CNFTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.CNFTraffic.ICNFTraffic createCNFTrafficReplica(String name, jprime.CNFTraffic.ICNFTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * Create a new child of type jprime.CentralizedTrafficType.CentralizedTrafficType and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.CentralizedTrafficType.ICentralizedTrafficType createCentralizedTrafficType() {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create a a new child of type jprime.CentralizedTrafficType.CentralizedTrafficType, and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.CentralizedTrafficType.ICentralizedTrafficType createCentralizedTrafficType(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.CentralizedTrafficType.CentralizedTrafficType and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @return the new child
	  */
	public jprime.CentralizedTrafficType.ICentralizedTrafficType createCentralizedTrafficType(String name) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Add a new child of type jprime.CentralizedTrafficType.CentralizedTrafficType.
	  */
	public void addCentralizedTrafficType(jprime.CentralizedTrafficType.CentralizedTrafficType kid) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.CentralizedTrafficType.CentralizedTrafficTypeReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.CentralizedTrafficType.ICentralizedTrafficType createCentralizedTrafficTypeReplica(jprime.CentralizedTrafficType.ICentralizedTrafficType to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create replica new child of type jprime.CentralizedTrafficType.CentralizedTrafficTypeReplica, which points to to_alias, and add it as a child to this node.
	  * @param to_alias the node to point to
	  * @return the new child
	  */
	public jprime.CentralizedTrafficType.ICentralizedTrafficType replicateCentralizedTrafficType(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.CentralizedTrafficType.CentralizedTrafficTypeReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.CentralizedTrafficType.ICentralizedTrafficType createCentralizedTrafficTypeReplica(String name, jprime.CentralizedTrafficType.ICentralizedTrafficType to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * Create a new child of type jprime.UDPTraffic.UDPTraffic and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.UDPTraffic.IUDPTraffic createUDPTraffic() {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create a a new child of type jprime.UDPTraffic.UDPTraffic, and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.UDPTraffic.IUDPTraffic createUDPTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.UDPTraffic.UDPTraffic and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @return the new child
	  */
	public jprime.UDPTraffic.IUDPTraffic createUDPTraffic(String name) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Add a new child of type jprime.UDPTraffic.UDPTraffic.
	  */
	public void addUDPTraffic(jprime.UDPTraffic.UDPTraffic kid) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.UDPTraffic.UDPTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.UDPTraffic.IUDPTraffic createUDPTrafficReplica(jprime.UDPTraffic.IUDPTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create replica new child of type jprime.UDPTraffic.UDPTrafficReplica, which points to to_alias, and add it as a child to this node.
	  * @param to_alias the node to point to
	  * @return the new child
	  */
	public jprime.UDPTraffic.IUDPTraffic replicateUDPTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.UDPTraffic.UDPTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.UDPTraffic.IUDPTraffic createUDPTrafficReplica(String name, jprime.UDPTraffic.IUDPTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * Create a new child of type jprime.SwingTCPTraffic.SwingTCPTraffic and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.SwingTCPTraffic.ISwingTCPTraffic createSwingTCPTraffic() {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create a a new child of type jprime.SwingTCPTraffic.SwingTCPTraffic, and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.SwingTCPTraffic.ISwingTCPTraffic createSwingTCPTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.SwingTCPTraffic.SwingTCPTraffic and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @return the new child
	  */
	public jprime.SwingTCPTraffic.ISwingTCPTraffic createSwingTCPTraffic(String name) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Add a new child of type jprime.SwingTCPTraffic.SwingTCPTraffic.
	  */
	public void addSwingTCPTraffic(jprime.SwingTCPTraffic.SwingTCPTraffic kid) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.SwingTCPTraffic.SwingTCPTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.SwingTCPTraffic.ISwingTCPTraffic createSwingTCPTrafficReplica(jprime.SwingTCPTraffic.ISwingTCPTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create replica new child of type jprime.SwingTCPTraffic.SwingTCPTrafficReplica, which points to to_alias, and add it as a child to this node.
	  * @param to_alias the node to point to
	  * @return the new child
	  */
	public jprime.SwingTCPTraffic.ISwingTCPTraffic replicateSwingTCPTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.SwingTCPTraffic.SwingTCPTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.SwingTCPTraffic.ISwingTCPTraffic createSwingTCPTrafficReplica(String name, jprime.SwingTCPTraffic.ISwingTCPTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * Create a new child of type jprime.PPBPTraffic.PPBPTraffic and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.PPBPTraffic.IPPBPTraffic createPPBPTraffic() {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create a a new child of type jprime.PPBPTraffic.PPBPTraffic, and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.PPBPTraffic.IPPBPTraffic createPPBPTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.PPBPTraffic.PPBPTraffic and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @return the new child
	  */
	public jprime.PPBPTraffic.IPPBPTraffic createPPBPTraffic(String name) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Add a new child of type jprime.PPBPTraffic.PPBPTraffic.
	  */
	public void addPPBPTraffic(jprime.PPBPTraffic.PPBPTraffic kid) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.PPBPTraffic.PPBPTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.PPBPTraffic.IPPBPTraffic createPPBPTrafficReplica(jprime.PPBPTraffic.IPPBPTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create replica new child of type jprime.PPBPTraffic.PPBPTrafficReplica, which points to to_alias, and add it as a child to this node.
	  * @param to_alias the node to point to
	  * @return the new child
	  */
	public jprime.PPBPTraffic.IPPBPTraffic replicatePPBPTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.PPBPTraffic.PPBPTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.PPBPTraffic.IPPBPTraffic createPPBPTrafficReplica(String name, jprime.PPBPTraffic.IPPBPTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * Create a new child of type jprime.TCPTraffic.TCPTraffic and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.TCPTraffic.ITCPTraffic createTCPTraffic() {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create a a new child of type jprime.TCPTraffic.TCPTraffic, and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.TCPTraffic.ITCPTraffic createTCPTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.TCPTraffic.TCPTraffic and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @return the new child
	  */
	public jprime.TCPTraffic.ITCPTraffic createTCPTraffic(String name) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Add a new child of type jprime.TCPTraffic.TCPTraffic.
	  */
	public void addTCPTraffic(jprime.TCPTraffic.TCPTraffic kid) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.TCPTraffic.TCPTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.TCPTraffic.ITCPTraffic createTCPTrafficReplica(jprime.TCPTraffic.ITCPTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create replica new child of type jprime.TCPTraffic.TCPTrafficReplica, which points to to_alias, and add it as a child to this node.
	  * @param to_alias the node to point to
	  * @return the new child
	  */
	public jprime.TCPTraffic.ITCPTraffic replicateTCPTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.TCPTraffic.TCPTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.TCPTraffic.ITCPTraffic createTCPTrafficReplica(String name, jprime.TCPTraffic.ITCPTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * Create a new child of type jprime.ICMPTraffic.ICMPTraffic and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.ICMPTraffic.IICMPTraffic createICMPTraffic() {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create a a new child of type jprime.ICMPTraffic.ICMPTraffic, and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.ICMPTraffic.IICMPTraffic createICMPTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.ICMPTraffic.ICMPTraffic and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @return the new child
	  */
	public jprime.ICMPTraffic.IICMPTraffic createICMPTraffic(String name) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Add a new child of type jprime.ICMPTraffic.ICMPTraffic.
	  */
	public void addICMPTraffic(jprime.ICMPTraffic.ICMPTraffic kid) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.ICMPTraffic.ICMPTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.ICMPTraffic.IICMPTraffic createICMPTrafficReplica(jprime.ICMPTraffic.IICMPTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create replica new child of type jprime.ICMPTraffic.ICMPTrafficReplica, which points to to_alias, and add it as a child to this node.
	  * @param to_alias the node to point to
	  * @return the new child
	  */
	public jprime.ICMPTraffic.IICMPTraffic replicateICMPTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.ICMPTraffic.ICMPTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.ICMPTraffic.IICMPTraffic createICMPTrafficReplica(String name, jprime.ICMPTraffic.IICMPTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * Create a new child of type jprime.PingTraffic.PingTraffic and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.PingTraffic.IPingTraffic createPingTraffic() {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create a a new child of type jprime.PingTraffic.PingTraffic, and add it as a child to this node.
	  * @return the new child
	  */
	public jprime.PingTraffic.IPingTraffic createPingTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.PingTraffic.PingTraffic and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @return the new child
	  */
	public jprime.PingTraffic.IPingTraffic createPingTraffic(String name) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Add a new child of type jprime.PingTraffic.PingTraffic.
	  */
	public void addPingTraffic(jprime.PingTraffic.PingTraffic kid) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.PingTraffic.PingTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.PingTraffic.IPingTraffic createPingTrafficReplica(jprime.PingTraffic.IPingTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	  * jython method to create replica new child of type jprime.PingTraffic.PingTrafficReplica, which points to to_alias, and add it as a child to this node.
	  * @param to_alias the node to point to
	  * @return the new child
	  */
	public jprime.PingTraffic.IPingTraffic replicatePingTraffic(PyObject[] v, String[] n) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	 /**
	  * Create a new child of type jprime.PingTraffic.PingTrafficReplica, which is a deep-lightweight copy of to_replicate, and add it as a child to this node.
	  * @param name the name to assign the new node
	  * @param to_replicate the node which is to be deep copied
	  * @return the new child
	  */
	public jprime.PingTraffic.IPingTraffic createPingTrafficReplica(String name, jprime.PingTraffic.IPingTraffic to_replicate) {
		throw new RuntimeException("Cannot add children to aliases!");
	}

	/**
	 * @param kid the child to add
	 */

	/**
	 * @param visitor a generic visitor
	 */
	public abstract void accept(jprime.visitors.IGenericVisitor visitor);
}
