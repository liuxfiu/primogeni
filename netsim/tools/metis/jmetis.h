/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class jprime_JMetis */

#ifndef _Included_jprime_JMetis
#define _Included_jprime_JMetis
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     jprime_JMetis
 * Method:    PartitionGraph
 * Signature: (ZZI[I[I[I[III[I[I)I
 *
 * @param force_PartGraphRecursive force the use of PartGraphRecursive
 * @param force_PartGraphKway  force the use of PartGraphKway
 * @param num_vertices The number of vertices in the graph
 * @param xadj the index into adjncy for each node
 * @param adjncy the adjcy list for all nodes
 * @param vwgt weights for the ndoes
 * @param adjwgt edge wieghts
 * @param wgtflag Used to indicate if the graph is weighted. this is the int_value of the GraphType
 * @param nparts number of parts we want to graph to be partitioned into
 * @param options see manual
 * @param partioned_nodes an ints, where the index is the node_id and the value is part_id
 * @return the number of partitions
 */
JNIEXPORT jint JNICALL Java_jprime_JMetis_PartitionGraph(
		JNIEnv * env,
		jobject obj,
		jboolean j_force_PartGraphRecursive,
		jboolean j_force_PartGraphKway,
		jint j_num_vertices,
		jintArray j_xadj,
		jintArray j_adjncy,
		jintArray j_vwgt,
		jintArray j_adjwgt,
		jint j_wgtflag,
		jint j_nparts,
		jintArray j_options,
		jintArray j_partioned_nodes);


/*
 * Class:     jprime_JMetis
 * Method:    mcPartitionGraph
 * Signature: (ZZII[I[I[I[III[I[I)I
 *
 * @param force_PartGraphRecursive force the use of PartGraphRecursive
 * @param force_PartGraphKway  force the use of PartGraphKway
 * @param num_vertices The number of vertices in the graph
 * @param num_constraints The number of constraints. This should be greater than one and smaller than 15.
 * @param xadj the index into adjncy for each node
 * @param adjncy the adjcy list for all nodes
 * @param vwgt weights for the ndoes
 * @param adjwgt edge wieghts
 * @param wgtflag Used to indicate if the graph is weighted. this is the int_value of the GraphType
 * @param nparts number of parts we want to graph to be partitioned into
 * @param options see manual
 * @param partioned_nodes an ints, where the index is the node_id and the value is part_id
 * @return the number of partitions
 */
JNIEXPORT jint JNICALL Java_jprime_JMetis_mcPartitionGraph(
		JNIEnv * env,
		jobject obj,
		jboolean j_force_PartGraphRecursive,
		jboolean j_force_PartGraphKway,
		jint j_num_vertices,
		jint j_num_constraints,
		jintArray j_xadj,
		jintArray j_adjncy,
		jintArray j_vwgt,
		jintArray j_adjwgt,
		jint j_wgtflag,
		jint j_nparts,
		jintArray j_options,
		jintArray j_partioned_nodes);

/*
 * Class:     jprime_JMetis
 * Method:    wPartitionGraph
 * Signature: (ZZI[I[I[I[III[F[I[I)I
 *
 * @param force_PartGraphRecursive force the use of PartGraphRecursive
 * @param force_PartGraphKway  force the use of PartGraphKway
 * @param num_vertices The number of vertices in the graph
 * @param xadj the index into adjncy for each node
 * @param adjncy the adjcy list for all nodes
 * @param vwgt weights for the ndoes
 * @param adjwgt edge wieghts
 * @param wgtflag Used to indicate if the graph is weighted. this is the int_value of the GraphType
 * @param nparts number of parts we want to graph to be partitioned into
 * @param part_weights The number of constraints. This should be greater than one and smaller than 15.
 * @param options see manual
 * @param partioned_nodes an ints, where the index is the node_id and the value is part_id
 * @return the number of partitions
 */
JNIEXPORT jint JNICALL Java_jprime_JMetis_wPartitionGraph(
		JNIEnv * env,
		jobject obj,
		jboolean j_force_PartGraphRecursive,
		jboolean j_force_PartGraphKway,
		jint j_num_vertices,
		jintArray j_xadj,
		jintArray j_adjncy,
		jintArray j_vwgt,
		jintArray j_adjwgt,
		jint j_wgtflag,
		jint j_nparts,
		jfloatArray j_part_weights,
		jintArray j_options,
		jintArray j_partioned_nodes);

#ifdef __cplusplus
}
#endif
#endif